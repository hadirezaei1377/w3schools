Indexing & Search

MongoDB Atlas comes with a full-text search engine that can be used to search for documents in a collection.

Creating an Index
We'll use the Atlas dashboard to create an index on the "sample_mflix" database from the sample data that we loaded in the Intro to Aggregations section.

Running a Query
To use our search index, we will use the $search operator in our aggregation pipeline.

Example
db.movies.aggregate([
  {
    $search: {
      index: "default", // optional unless you named your index something other than "default"
      text: {
        query: "star wars",
        path: "title"
      },
    },
  },
  {
    $project: {
      title: 1,
      year: 1,
    }
  }
])
The first stage of this aggregation pipeline will return all documents in the movies collection that contain the word "star" or "wars" in the title field.

The second stage will project the title and year fields from each document.