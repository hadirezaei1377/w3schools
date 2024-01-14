Schema Validation
By default MongoDB has a flexible schema. This means that there is no strict schema validation set up initially.

Schema validation rules can be created in order to ensure that all documents a collection share a similar structure.

MongoDB supports JSON Schema validation. The $jsonSchema operator allows us to define our document structure.

Example
db.createCollection("posts", {
  validator: {
    $jsonSchema: {
      bsonType: "object",
      required: [ "title", "body" ],
      properties: {
        title: {
          bsonType: "string",
          description: "Title of post - Required."
        },
        body: {
          bsonType: "string",
          description: "Body of post - Required."
        },
        category: {
          bsonType: "string",
          description: "Category of post - Optional."
        },
        likes: {
          bsonType: "int",
          description: "Post like count. Must be an integer - Optional."
        },
        tags: {
          bsonType: ["string"],
          description: "Must be an array of strings - Optional."
        },
        date: {
          bsonType: "date",
          description: "Must be a date - Optional."
        }
      }
    }
  }
})
This will create the posts collection in the current database and specify the JSON Schema validation requirements for the collection.

MongoDB Data API
The MongoDB Data API can be used to query and update data in a MongoDB database without the need for language specific drivers.

Language drivers should be used when possible, but the MongoDB Data API comes in handy when drivers are not available or drivers are overkill for the application.

MongoDB Drivers
The MongoDB Shell (mongosh) is great, but generally you will need to use MongoDB in your application. To do this, MongoDB has many language drivers.

The language drivers allow you to interact with your MongoDB database using the methods you've learned so far in `mongosh` but directly in your application.
