SQL is the standard language for dealing with Relational Databases.
SQL is used to insert, search, update, and delete database records.

The following SQL statement selects all the records in the "Customers" table:

SELECT * FROM Customers;

Some of The Most Important SQL Commands:

SELECT - extracts data from a database
UPDATE - updates data in a database
DELETE - deletes data from a database
INSERT INTO - inserts new data into a database

CREATE DATABASE - creates a new database
ALTER DATABASE - modifies a database
CREATE TABLE - creates a new table
ALTER TABLE - modifies a table
DROP TABLE - deletes a table
CREATE INDEX - creates an index (search key)
DROP INDEX - deletes an index

The SELECT statement is used to select data from a database.
The data returned is stored in a result table, called the result-set.

SELECT * FROM table_name;
SELECT CustomerName, City, Country FROM Customers;
The SELECT DISTINCT statement is used to return only distinct (different) values.
Inside a table, a column often contains many duplicate values; and sometimes you only want to list the different (distinct) values.

SELECT DISTINCT column1, column2, ...
FROM table_name;

WHERE Syntax
SELECT column1, column2, ...
FROM table_name
WHERE condition;
Note: The WHERE clause is not only used in SELECT statements, it is also used in UPDATE, DELETE, etc.!

WHERE CustomerID = 1;
Operators in The WHERE Clause
The following operators can be used in the WHERE clause:

Operator	Description	Example
=	Equal	
>	Greater than	
<	Less than	
>=	Greater than or equal	
<=	Less than or equal	
<>	Not equal. Note: In some versions of SQL this operator may be written as !=	
BETWEEN	Between a certain range	

The MySQL AND, OR and NOT Operators
The WHERE clause can be combined with AND, OR, and NOT operators.
The AND and OR operators are used to filter records based on more than one condition:
The AND operator displays a record if all the conditions separated by AND are TRUE.
The OR operator displays a record if any of the conditions separated by OR is TRUE.
The NOT operator displays a record if the condition(s) is NOT TRUE.

SELECT column1, column2, ...
FROM table_name
WHERE condition1 AND condition2 AND condition3 ...;
OR Syntax
SELECT column1, column2, ...
FROM table_name
WHERE condition1 OR condition2 OR condition3 ...;
NOT Syntax
SELECT column1, column2, ...
FROM table_name
WHERE NOT condition;

SELECT * FROM Customers
WHERE Country = 'Germany' AND City = 'Berlin';
OR Example
The following SQL statement selects all fields from "Customers" where city is "Berlin" OR "Stuttgart":

Example
SELECT * FROM Customers
WHERE City = 'Berlin' OR City = 'Stuttgart';
The following SQL statement selects all fields from "Customers" where country is "Germany" OR "Spain":

Example
SELECT * FROM Customers
WHERE Country = 'Germany' OR Country = 'Spain';
NOT Example
The following SQL statement selects all fields from "Customers" where country is NOT "Germany":

Example
SELECT * FROM Customers
WHERE NOT Country = 'Germany';
Combining AND, OR and NOT
You can also combine the AND, OR and NOT operators.

The following SQL statement selects all fields from "Customers" where country is "Germany" AND city must be "Berlin" OR "Stuttgart" (use parenthesis to form complex expressions):

Example
SELECT * FROM Customers
WHERE Country = 'Germany' AND (City = 'Berlin' OR City = 'Stuttgart');
The following SQL statement selects all fields from "Customers" where country is NOT "Germany" and NOT "USA":

Example
SELECT * FROM Customers
WHERE NOT Country = 'Germany' AND NOT Country = 'USA';
Test Yourself With Exercises
