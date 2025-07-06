# Write your MySQL query statement below
-- delete from person where id not in (select min(id) from person group by email);
delete from Person
where id not in(
select m from(
select min(id) as m
from Person
group by email ) as k
);
