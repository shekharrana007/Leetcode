# Write your MySQL query statement below
select w1.id
from weather w1
left join weather w2
on w1.recordDate -INterval 1 Day=w2.recordDate
where w1.temperature > w2.temperature;