/* Write your T-SQL query statement below */
WITH cte AS
(SELECT d.name AS Department, e.name AS Employee, e.salary,
    DENSE_RANK() OVER(PARTITION BY e.departmentID ORDER BY e.salary DESC) AS rank
FROM Employee e
JOIN Department d
ON e.departmentID = d.id)
SELECT Department, Employee, salary AS Salary
FROM cte WHERE rank < 4;
