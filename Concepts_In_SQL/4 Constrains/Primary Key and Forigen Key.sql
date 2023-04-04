--Primary Key and Foregin Key  Constraint

create table department (dept_no int primary key , dept_name varchar(50),dept_strength int);--parent table

insert department values(1,'electrical',5000),(2,'computer sciecne',200),(3,'mechanicak',1000);
select *from department;

create table students (std_id int , std_name varchar(50),std_age int , dept_no int foreign key references department(dept_no));--chlid table 

insert students values (101,'Muhammad',20,1);
insert students values (102,'Ali',20,2);
insert students values (103,'Jinnah',20,3);
insert students values (104,'Khan',22,4);-- it will give us an errro as the values are not in the primart key 
SELECT * from students;