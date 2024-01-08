JSON is a format for storing and transporting data, for example JSON is often used when data is sent from a server to a web page

JSON stands for JavaScript Object Notation
JSON is a lightweight data interchange format
JSON is language independent 
JSON is "self-describing" and easy to understand

for example :

{
"employees":[
  {"firstName":"John", "lastName":"Doe"},
  {"firstName":"Anna", "lastName":"Smith"},
  {"firstName":"Peter", "lastName":"Jones"}
]
}

Rules:
Data is in name/value pairs
Data is separated by commas
Curly braces hold objects
Square brackets hold arrays

use the JavaScript built-in function JSON.parse() to convert the string into a JavaScript object


