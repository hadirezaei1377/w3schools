Example:
Find all documents that have a category of "news".

db.posts.find( {category: "News"} )

The MongoDB Query API can be used two ways:

CRUD Operations
Aggregation Pipelines

The MongoDB Query is the way you will interact with your data
after creating database, There are 2 ways to create a collection:

Method 1:
we can create a collection using the createCollection() database method
db.createCollection("posts")

Method 2:
we can also create a collection during the insert process
for example we are here assuming object is a valid JavaScript object containing post data:
db.posts.insertOne(object)

There are 2 methods to insert documents into a MongoDB database:


insertOne()
To insert a single document, use the insertOne() method
This method inserts a single object into the database

db.posts.insertOne({
  title: "Post Title 1",
  body: "Body of post.",
  category: "News",
  likes: 1,
  tags: ["news", "events"],
  date: Date()
})

If you try to insert documents into a collection that does not exist, MongoDB will create the collection automatically

insertMany()
To insert multiple documents at once, use the insertMany() method.
This method inserts an array of objects into the database.
db.posts.insertMany([  
  {
    title: "Post Title 2",
    body: "Body of post.",
    category: "Event",
    likes: 2,
    tags: ["news", "events"],
    date: Date()
  },
  {
    title: "Post Title 3",
    body: "Body of post.",
    category: "Technology",
    likes: 3,
    tags: ["news", "events"],
    date: Date()
  },
  {
    title: "Post Title 4",
    body: "Body of post.",
    category: "Event",
    likes: 4,
    tags: ["news", "events"],
    date: Date()
  }
])

There are 2 methods to find and select data from a MongoDB collection, find() and findOne()
find()
To select data from a collection in MongoDB, we can use the find() method
 If left empty, all documents will be returned

Example
db.posts.find()
findOne()

To select only one document, we can use the findOne() method
If left empty, it will return the first document it finds
This method only returns the first match it finds

Example
db.posts.findOne()
Querying Data
To query, or filter, data we can include a query in our find() or findOne() methods

Example
db.posts.find( {category: "News"} )
Projection
Both find methods accept a second parameter called projection
This parameter is an object that describes which fields to include in the results
This parameter is optional, If omitted, all fields will be included in the results

Example
This example will only display the title and date fields in the results

db.posts.find({}, {title: 1, date: 1})
Notice that the _id field is also included. This field is always included unless specifically excluded.
We use a 1 to include a field and 0 to exclude a field.

Example
This time, let's exclude the _id field.

db.posts.find({}, {_id: 0, title: 1, date: 1})
we cannot use both 0 and 1 in the same object. The only exception is the _id field. we should either specify the fields you would like to include or the fields you would like to exclude.

Update
To update an existing document we can use the updateOne() or updateMany() methods
The first parameter is a query object to define which document or documents should be updated
The second parameter is an object defining the updated data

updateOne()
The updateOne() method will update the first document that is found matching the provided query

Example
db.posts.find( { title: "Post Title 1" } ) 
Now let's update the "likes" on this post to 2. To do this, we need to use the $set operator

Example
db.posts.updateOne( { title: "Post Title 1" }, { $set: { likes: 2 } } ) 

db.posts.updateOne( 
  { title: "Post Title 5" }, 
  {
    $set: 
      {
        title: "Post Title 5",
        body: "Body of post.",
        category: "Event",
        likes: 5,
        tags: ["news", "events"],
        date: Date()
      }
  }, 
  { upsert: true }
)
updateMany()
The updateMany() method will update all documents that match the provided query

Example
Update likes on all documents by 1. For this we will use the $inc (increment) operator:

db.posts.updateMany({}, { $inc: { likes: 1 } })

Delete 
We can delete documents by using the methods deleteOne() or deleteMany()
These methods accept a query object. The matching documents will be deleted

deleteOne()
The deleteOne() method will delete the first document that matches the query provided

Example
db.posts.deleteOne({ title: "Post Title 5" })
deleteMany()
The deleteMany() method will delete all documents that match the query provided

Example
db.posts.deleteMany({ category: "Technology" })