# Write your MySQL query statement below
with cte as(
    select turn, person_id as id,person_name as name,weight,
    sum(weight) over(order by turn) as total_weight
    from queue 
)
select name as person_name
from cte
where total_weight<=1000
order by total_weight desc
limit 1;
