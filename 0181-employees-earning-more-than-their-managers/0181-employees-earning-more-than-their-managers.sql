# Write your MySQL query statement below
select E.name as Employee from 
Employee E
 join
Employee M
on E.managerid=M.id
where E.salary > M.salary;