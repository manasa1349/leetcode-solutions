# Write your MySQL query statement below
SELECT e.employee_id,
       COALESCE(p.department_id, e.department_id) AS department_id
FROM Employee e
LEFT JOIN Employee p
       ON e.employee_id = p.employee_id
       AND p.primary_flag = 'Y'
GROUP BY e.employee_id;
