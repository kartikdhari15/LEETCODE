# Write your MySQL query statement below
select e.name as Employee from Employee e
where e.salary>(select salary from Employee where e.managerId=id
               and e.managerId is not null);