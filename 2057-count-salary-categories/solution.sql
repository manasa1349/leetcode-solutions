-- # Write your MySQL query statement below
-- with cte as(
-- select account_id,income,
-- (
--     case
--     when income<20000 then "Low Salary"
--     when income>=20000 and income<=50000 then "Average Salary"
--     else "High Salary"
--     end
-- ) as category
-- from accounts
-- ),
-- cte2 as(
--     select "Low Salary" as category
--     union all 
--     select "Average Salary"
--     union all
--     select "High Salary"
-- )
-- select c2.category, coalesce(count(c1.category),0) as accounts_count
-- from cte2 c2
-- left join cte c1
-- on c1.category=c2.category
-- group by c2.category;

SELECT 
    'Low Salary' AS category,
    SUM(CASE WHEN income < 20000 THEN 1 ELSE 0 END) AS accounts_count
FROM Accounts

UNION ALL

SELECT 
    'Average Salary',
    SUM(CASE WHEN income BETWEEN 20000 AND 50000 THEN 1 ELSE 0 END)
FROM Accounts

UNION ALL

SELECT 
    'High Salary',
    SUM(CASE WHEN income > 50000 THEN 1 ELSE 0 END)
FROM Accounts;

