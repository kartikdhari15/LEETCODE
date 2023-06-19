# Write your MySQL query statement below
# select e.name as Employee from Employee e
# where e.salary>(select salary from Employee where e.managerId=id
#                and e.managerId is not null);

#SUBQUERIES ARE SLOWER AS TABLE IS FETCHED AGAIN

SELECT a.name AS Employee
FROM Employee a
INNER JOIN Employee b
ON a.managerId = b.id
AND a.salary > b.salary