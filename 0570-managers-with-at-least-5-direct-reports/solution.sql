# Write your MySQL query statement below
-- select name from employee
-- where id in (
--     select managerId from employee
--     group by managerId
--     having count(*)>=5
-- );

SELECT e.name
FROM employee e
JOIN employee m ON e.id = m.managerId
GROUP BY e.id, e.name
HAVING COUNT(m.id) >= 5;

