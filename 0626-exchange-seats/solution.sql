# Write your MySQL query statement below
with cte as(
select id,student,
case 
when mod(id,2)=1 then lead(student,1,student) over(order by id)
else lag(student,1) over(order by id) 
end as new_name
from seat
)
select id,new_name as student from cte;
