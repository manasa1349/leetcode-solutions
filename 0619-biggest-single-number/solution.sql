-- # Write your MySQL query statement below
-- with cte as(
--     select num,count(num) as cnt from mynumbers 
--     group by num
--     order by count(num),num desc
-- )
-- select num from cte
-- where cnt=1
-- limit 1;

SELECT MAX(num) AS num
FROM (
    SELECT num
    FROM mynumbers
    GROUP BY num
    HAVING COUNT(num) = 1
) AS subquery;

