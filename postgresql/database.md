create a table by name car : 

CREATE TABLE cars (
  brand VARCHAR(255),
  model VARCHAR(255),
  year INT
);

we can "display" the empty table we just created with another SQL statement:

SELECT * FROM cars;
Which will give us this result:

 brand | model | year
-------+-------+------
(0 rows)


To insert data into a table in PostgreSQL, we use the INSERT INTO statement.

INSERT INTO cars (brand, model, year)
VALUES ('Ford', 'Mustang', 2000);

To check the result we can display the table with this SQL statement:

SELECT * FROM cars;
Which will return this result:

 brand |  model  | year
-------+---------+------
 Ford  | Mustang | 1964
(1 row)

To insert multiple rows of data, we use the same INSERT INTO statement, but with multiple values:

INSERT INTO cars (brand, model, year)
VALUES
  ('Volvo', 'p1800', 1968),
  ('BMW', 'M1', 1978),
  ('Toyota', 'Celica', 1975);

Select Data
To retrieve data from a data base, we use the SELECT statement.

SELECT brand, year FROM cars;
Return ALL Columns
Specify a * instead of the column names to select all columns.

To add a column to an existing table, we have to use the ALTER TABLE statement.

The ALTER TABLE statement is used to add, delete, or modify columns in an existing table.

The ALTER TABLE statement is also used to add and drop various constraints on an existing table.

We want to add a column named color to our cars table.

When adding columns we must also specify the data type of the column. Our color column will be a string, and we specify string types with the VARCHAR keyword. we also want to restrict the number of characters to 255:

The UPDATE statement is used to modify the value(s) in existing records in a table.

Example
Set the color of the Volvo to 'red':

UPDATE cars
SET color = 'red'
WHERE brand = 'Volvo';

ALTER COLUMN
We want to change the data type of the year column of the cars table from INT to VARCAHR(4).

To modify a column, use the ALTER COLUMN statement and the TYPE keyword followed by the new data type:

Change Maximum Allowed Characters
We also want to change the maximum number of characters allowed in the color column of the cars table.

Use the same syntax as above, use the ALTER COLUMN statement and the TYPE keyword followed by the new data type:

DROP COLUMN
We want to remove the column named color from the cars table.

To remove a column, use the DROP COLUMN statement:

Example
Remove the color column:

ALTER TABLE cars
DROP COLUMN color;
Result
ALTER TABLE
Display Table
To check the result we can display the table with this SQL statement:

The DELETE statement is used to delete existing records in a table.
To delete the record(s) where brand is 'Volvo', use this statement:

Delete all records where brand is 'Volvo':

DELETE FROM cars
WHERE brand = 'Volvo';

It is possible to delete all rows in a table without deleting the table. This means that the table structure, attributes, and indexes will be intact.

The following SQL statement deletes all rows in the cars table, without deleting the table:

Example
Delete all records in the cars table:

DELETE FROM cars;
Result
DELETE 3
Which means that all 3 rows were deleted.

