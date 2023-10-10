/*Query all columns for all American cities in the CITY table with populations larger than 100000. The CountryCode for America is USA.

The CITY table is described as follows:*/

SELECT * FROM CITY
WHERE POPULATION > 100000
AND COUNTRYCODE = 'USA'

/*
 https://www.hackerrank.com/challenges/revising-the-select-query/problem?isFullScreen=true
*/

 /*
Query the NAME field for all American cities in the CITY table with populations larger than 120000. The CountryCode for America is USA.

The CITY table is described as follows:
*/

SELECT NAME FROM CITY
WHERE POPULATION > 120000
AND COUNTRYCODE = 'USA'

/*
 https://www.hackerrank.com/challenges/revising-the-select-query-2/problem?isFullScreen=true
*/
