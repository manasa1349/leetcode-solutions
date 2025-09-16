-- /* Write your T-SQL query statement below */
-- delete p1 from person p1
-- join person p2
-- on p1.id>p2.id and 
-- p1.email=p2.email;


WITH ranked AS (
    SELECT 
        id,
        email,
        ROW_NUMBER() OVER (PARTITION BY email ORDER BY id) AS rn
    FROM Person
)
DELETE FROM Person
WHERE id IN (
    SELECT id FROM ranked WHERE rn > 1
);

