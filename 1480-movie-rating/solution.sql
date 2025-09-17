-- # Write your MySQL query statement below
-- (select u.name
-- from users u
-- join movierating r
-- on u.user_id=r.user_id
-- group by u.user_id
-- -- having count(movie_id) in (select max(movie_id) from movierating group by user_id)
-- order by count(r.movie_id) desc,u.name
-- limit 1
-- )
-- union all

-- (select m.title
-- from movies m
-- join movierating r1
-- on m.movie_id=r1.movie_id
-- and created_at between '2020-02-01' and '2020-02-29'
-- group by r1.movie_id
-- having avg(rating) in (select max(avg(rating)) from movierating group by movie_id) 
-- order by m.title
-- limit 1
-- );

(
    SELECT u.name AS results
    FROM users u
    JOIN movierating r 
      ON u.user_id = r.user_id
    GROUP BY u.user_id
    ORDER BY COUNT(r.movie_id) DESC, u.name ASC
    LIMIT 1
)

UNION ALL

(
    SELECT m.title AS results
    FROM movies m
    JOIN movierating r 
      ON m.movie_id = r.movie_id
    WHERE r.created_at BETWEEN '2020-02-01' AND '2020-02-29'
    GROUP BY m.movie_id
    ORDER BY AVG(r.rating) DESC, m.title ASC
    LIMIT 1
);

