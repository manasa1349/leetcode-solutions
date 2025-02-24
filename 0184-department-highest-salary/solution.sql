# Write your MySQL query statement below
with cte as(
select d.name as department,e.name as employee,e.salary,
RANK() OVER (PARTITION BY d.id ORDER BY e.salary DESC) AS rnk
from employee e
join department d
on e.departmentId=d.id)
select department,employee,salary
from cte
where rnk=1;
