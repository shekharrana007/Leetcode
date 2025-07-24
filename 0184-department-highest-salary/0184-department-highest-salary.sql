# Write your MySQL query statement below
select d.name as Department , e.name as Employee, e.salary
from Employee e
left join 
Department d
on e.departmentId=d.id 
where(e.departmentId,e.salary)IN(
    select departmentid,max(salary)
    from employee
    group by departmentId
);
