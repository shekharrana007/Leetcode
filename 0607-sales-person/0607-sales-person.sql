# Write your MySQL query statement below
select  s.name
from Salesperson s
where s.sales_id not IN(
    SELECT o.sales_id
     FROM Orders o
     join Company c
on  c.com_id=o.com_id
WHERE c.name = 'RED'
);



