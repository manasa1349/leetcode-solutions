# Write your MySQL query statement below
select author_id as id
from views
where author_id=viewer_id
group by author_id
having count(viewer_id)>=1
order by author_id;
