Select Data
To retrieve data from a data base, we use the SELECT statement.

Specify Columns
By specifying the column names, we can choose which columns to select:

Example
SELECT customer_name, country FROM customers;
Return ALL Columns
Specify a * instead of the column names to select all columns:

The SELECT DISTINCT statement is used to return only distinct (different) values.

Inside a table, a column often contains many duplicate values and sometimes you only want to list the different (distinct) values.

Example
Select only the DISTINCT values from the country column in the customers table:

SELECT DISTINCT country FROM customers;
Even though the customers table has 91 records, it only has 21 different countries, and that is what you get as a result when executing the SELECT DISTINCT statement above
