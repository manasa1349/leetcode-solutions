# Write your MySQL query statement below
WITH cte AS
(
SELECT d.name AS department,e.name AS employee,e.salary,
MAX(salary) OVER (PARTITION BY d.name) AS max_salary
FROM employee e JOIN department d
ON e.departmentid=d.id
)
SELECT department,employee,salary FROM cte WHERE salary=max_salary;
