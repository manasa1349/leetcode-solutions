# Write your MySQL query statement below
with cte1 as(
    select emp_id,event_day,out_time-in_time as diff
    from employees
),
cte2 as(
    select event_day as day,emp_id,sum(diff) as total_time
    from cte1
    group by emp_id,event_day
)
select * from cte2;
