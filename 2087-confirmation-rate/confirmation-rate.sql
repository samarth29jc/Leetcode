# Write your MySQL query statement below
select s.user_id,
COALESCE(ROUND(SUM(c.action = 'confirmed') / NULLIF(COUNT(c.action), 0), 2), 0) AS confirmation_rate
from signups as s
left join confirmations as c
on s.user_id=c.user_id
group by s.user_id
