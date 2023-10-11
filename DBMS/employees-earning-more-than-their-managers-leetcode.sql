# Write your MySQL query statement below

#SELECT e2.name as Employee FROM Employee e1
#INNER JOIN employee e2 ON e1.id = e2.managerId
#WHERE e1.salary < e2.salary

SELECT e1.name as Employee FROM Employee e1
INNER JOIN Employee e2 ON e2.id = e1.managerId
WHERE e2.salary < e1.salary

/*
https://leetcode.com/problems/employees-earning-more-than-their-managers/description/
*/
