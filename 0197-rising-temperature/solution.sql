select w1.id
from weather w1
where w1.temperature>
(
    select w2.temperature
    from weather w2
    where w2.recorddate=date_sub(w1.recorddate, interval 1 day)
);
