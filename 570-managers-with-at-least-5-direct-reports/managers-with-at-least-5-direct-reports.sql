select e.name from Employee e
inner join Employee ee on ee.managerId = e.id
group by ee.managerId 
having count(*) > 4