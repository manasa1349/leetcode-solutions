# Write your MySQL query statement below
WITH daily_revenue AS (
    SELECT visited_on, SUM(amount) AS amount
    FROM Customer
    GROUP BY visited_on
),

rolling_window AS (
    SELECT 
        visited_on,
        SUM(amount) OVER (
            ORDER BY visited_on 
            RANGE BETWEEN INTERVAL 6 DAY PRECEDING AND CURRENT ROW
        ) AS total_7days,
        COUNT(*) OVER (
            ORDER BY visited_on 
            RANGE BETWEEN INTERVAL 6 DAY PRECEDING AND CURRENT ROW
        ) AS days_count
    FROM daily_revenue
)

SELECT 
    visited_on,
    total_7days AS amount,
    ROUND(total_7days / 7, 2) AS average_amount
FROM rolling_window
WHERE days_count = 7
ORDER BY visited_on;

