
#1ST METHOD
  
SELECT P.firstName, P.lastName, A.city, A.state
FROM Person P LEFT JOIN Address A
USING (personID)

#2ND METHOD

SELECT P.firstName, P.lastName, A.city, A.state
FROM Person P LEFT JOIN Address A
on P.personID = A.personID
/*
 https://leetcode.com/problems/combine-two-tables/submissions/
*/
