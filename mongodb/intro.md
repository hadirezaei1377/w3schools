document database
BSON, type of JSON format
A record in MongoDB is a document
key value pairs similar to the structure of JSON objects

Records in a MongoDB database are called documents
values may include numbers, strings, booleans, arrays ...
Example Document :
{
	title: "Post Title 1",
	body: "Body of post.",
	category: "News",
	likes: 1,
	tags: ["news", "events"],
	date: Date()
}

mongodb is of non-releational database ,It means that relational data is stored differently
MongoDB stores data in flexible documents

Instead of having multiple tables you can simply keep all of your related data together, This makes reading your data very fast
tables these are called collections here

