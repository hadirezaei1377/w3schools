Operators :
=	Equal to
<	Less than
>	Greater than
<=	Less than or equal to
>=	Greater than or equal to
<>	Not equal to
!=	Not equal to

Example
Return all records where the brand is 'Volvo':

SELECT * FROM cars
WHERE brand = 'Volvo';

Return all records where the brand is NOT 'Volvo':

SELECT * FROM cars
WHERE brand <> 'Volvo';
same result with the != 

sign %, represents zero, one, or multiple characters.
The underscore sign _, represents one single character.
Example
Return all records where the model STARTS with a capital 'M':

SELECT * FROM cars
WHERE model LIKE 'M%';
The LIKE operator is case sensitive.

ILIKE
Same as the LIKE operator, but ILIKE is case insensitive.

Example
Return all records where the model start with a 'm':

SELECT * FROM cars
WHERE model ILIKE 'm%';
AND
The logical AND operator is used when you want to check more that one condition:

Example
Return all records where the brand is 'Volvo' and the year is 1968:

SELECT * FROM cars
WHERE brand = 'Volvo' AND year = 1968;
OR
The logical OR operator is used when you can accept that only one of many conditions is true:

Example
Return all records where the brand is 'Volvo' OR the year is 1975:

SELECT * FROM cars
WHERE brand = 'Volvo' OR year = 1975;
IN
The IN operator is used when a column's value matches any of the values in a list:

Example
Return all records where the brand is present in this list: ('Volvo', 'Mercedes', 'Ford'):

SELECT * FROM cars
WHERE brand IN ('Volvo', 'Mercedes', 'Ford');
BETWEEN
The BETWEEN operator is used to check if a column's value is between a specified range of values:

Example
Return all records where the year is between 1970 and 1980:

SELECT * FROM cars
WHERE year BETWEEN 1970 AND 1980;
The BETWEEN operator includes the from and to values, meaning that in the above example, the result would include cars made in 1970 and 1980 as well.
