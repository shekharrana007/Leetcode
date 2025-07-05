# Write your MySQL query statement below
Select st.student_id,st.student_name,su.subject_name,count(e.student_id) as attended_exams
from Students st
cross join Subjects su
left join Examinations e
on st.student_id=e.student_id
And su.subject_name=e.subject_name
group by st.student_id,st.student_name,su.subject_name
order by st.student_id ,su.subject_name;