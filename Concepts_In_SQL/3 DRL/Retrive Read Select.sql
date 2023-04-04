--DRL 
--we can perform these with drl 
--retrive 
--read 
--select 

select age from studentinformation where age = 21;

--projection method without condition 
-- selection method with conidtion 
-- joins 

select *from studentinformation; -- fro showiing all the data 
select top 3 * from studentinformation; -- fro showing top 3 in cloumn 
select top 50 percent * from studentinformation ; -- for showing 10 percent data 
select distinct sname from studentinformation; -- for displaying distinct data 
select sname as firstname from studentinformation;
select *from studentinformation order by sname; -- default acending order 
select *from studentinformation order by sname desc; -- default acending order 
select *from studentinformation where sname is not null ; -- to select from  where the sname is not null 
select *from studentinformation where sname = 'fasih' and age = 21; -- to select from where sname = fasih  and age =21
select *from studentinformation where sname = 'fasih' or age = 21; --to select from where sname = fasih or age 
select * from studentinformation where sname in ('fasih','ali','masif')
select * from studentinformation where sname in ('ali');
select *from studentinformation where age  between 21 and 30;

