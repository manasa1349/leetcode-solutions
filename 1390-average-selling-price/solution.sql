# Write your MySQL query statement below
select p.product_id,round(ifnull(sum(units*price)/sum(units),0),2) as average_price
from prices p
left join unitssold u
on p.product_id=u.product_id
and u.purchase_date BETWEEN p.start_date AND p.end_date
group by p.product_id;
