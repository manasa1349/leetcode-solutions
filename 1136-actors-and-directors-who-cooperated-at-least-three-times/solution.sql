# Write your MySQL query statement below
with cte as(
    select actor_id,director_id
    from actordirector
    #where actor_id=director_id
    group by actor_id,director_id
    having count(timestamp)>=3
)
select * from cte;
