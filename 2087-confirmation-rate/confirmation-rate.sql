# Write your MySQL query statement below
select s.user_id,
ifnull(ROUND(SUM(c.action = 'confirmed') / COUNT(*), 2),0.00)
 AS confirmation_rate
from signups as s
left join confirmations as c
on s.user_id=c.user_id
group by s.user_id
