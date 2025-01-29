# Write your MySQL query statement below
select e1.name as Employee
from Employee e1
JOIN Employee m1
on e1.managerId=m1.id
where e1.salary>m1.salary;
