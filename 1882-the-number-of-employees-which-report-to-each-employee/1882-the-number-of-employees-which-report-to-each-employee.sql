# Write your MySQL query statement below
select 
e.employee_id,
e.name,
count(r.reports_to) as reports_count,
Round(avg(r.age)) as average_age
from employees e
JOIN 
employees r
on
e.employee_id=r.reports_to
group by
e.name,e.employee_id
order by
e.employee_id;

