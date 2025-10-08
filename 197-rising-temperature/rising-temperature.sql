select t1.id as Id from weather t1
inner join weather t2 
on datediff(t1.recordDate,t2.recordDate)=1
where t1.temperature>t2.temperature