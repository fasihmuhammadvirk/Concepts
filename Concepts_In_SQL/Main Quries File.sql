--DDL
--create a database
create database IST;
use IST;

--create a table and columns
create table studentinfomation
(

fname varchar(100),
age int , 
cgpa int


);

--add a column into an existing table 
alter table studentinformation Add  sname varchar(100);

--renaming the table and a cloum 
exec sp_rename 'studentinfomation', 'studentinformation';
sp_rename 'studentinformation.fname','fathern';

--alter the datatype of an exsting column 
alter table studentinformation alter column cgpa float;

--display
sp_help studentinformation;


--DML         

--Insert for all rows 
insert into studentinformation values ('ilyas',21,3.0,'fasih');
insert into studentinformation (fathern,age,cgpa,sname) values ('saleem',11,3.2,'ali');

--insert for a specific row 
insert into studentinformation (age) values (3);
insert into studentinformation (age) values (2);

--update column for all rows 
update studentinformation set cgpa = 3.0;

--update coulmn for a specific row ;
update studentinformation set age = 1 where sname is NUll;
update studentinformation set fathern = 'anything',sname='studentname' where age = 1;

--delete a specific row from the column
delete studentinformation where fathern is null;
delete studentinformation where age = 21;

--delete all rows from the column
delete studentinformation;

--show data in the table
select *from studentinformation;

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


--constranis 

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

-- Unique Constrain

create table csstudent1(std_id int unique , std_name varchar(50)unique )

insert csstudent1 values(2001,'Muhammad');
insert csstudent1 values(2002,'Ali');
insert csstudent1 values (2001,'Ali');-- it will generate an error as the vlaues should be unique 
insert csstudent1 values(2002,'Khan');-- it will also not be accpeted 
insert csstudent1 values (NULL,NULL);
SELECT * from csstudent1;

--Not Null Constraint 

create table csstudent2(std_id int not null , std_name varchar(50) not null);
insert csstudent2 values(2001,'Muhammad');
insert csstudent2 values(2002,'Ali');
insert csstudent2 values (2003,'Ali'); 
insert csstudent2 values(2002,'Khan'); 
insert csstudent2 values (NULL,NULL);-- it will not be accepted as null vlaues are not accepted
SELECT * from csstudent2;

--Check Constraint

create table csstudent3 (std_id int , std_name varchar(50),age int check (age>20));
insert csstudent3 values (2001,'Muhammad',21);
insert csstudent3 values (2002,'Ali',22);
insert csstudent3 values (2003,'Ali',23);
insert csstudent3 values (2002,'khan',19);-- it will not accept as the age should be greater than 20
insert csstudent3 values (Null,Null,Null);
SELECT * from csstudent3;

--like and check 

create table practice(

    fname varchar check( fname like('A%') and ('%A') )--accept name with start with A
)

alter table practice add age int check (age>=1 AND age<6);
alter table practice add std_id int;
alter table practice add CONSTRAINT UN_practice Unique (std_id); 
alter table practice add email varchar(50);
alter table practice add CONSTRAINT check_email check(email like('F'));  

create table studentabless(

    std_id int check (std_id >15 AND std_id < 30)
)


insert  into studentabless values (10);
insert  into studentabless values (20);
insert  studentabless values (15);
insert  studentabless values (35);
insert studentabless values (29);

select * from studentabless;

-- one to one relation 

create table Employee(
id int primary key,
namee varchar(50)
);

create table Salary(
Emp_id int foreign key references Employee(id) unique not null,  --for one to one 
SalaryAmount int
);

insert into Employee (id,namee) values (1,'asad'), (2,'tufail');
insert into Salary (Emp_id,SalaryAmount) values (1,1000),(2,2000);

select * from Employee;
select * from Salary;

-- one to many 

create table Country(
country_id int primary key,
country varchar(50) not null
);

create table City(
city_id int Identity,
city varchar(50) not null,
country_id int foreign key references Country(country_id)
);

SET IDENTITY_INSERT City ON;
insert into Country (country_id,country) values (1,'Pakistan'),(2,'China');
insert into City (city_id,city,country_id) values (5,'Lahore',1),(6,'Islamabad',1),(7,'Beijing',2);

select * from Country;
select * from City;

-- many to many 

create table films (

    film_id int primary key ,
    film_name varchar(100),
    director varchar(50),
    year_released varchar(50)
);

create table category (

    category_id int primary key,
    category_name varchar(50)
);

create table film_category(

    film_id int foreign key references films(film_id),
    category_id int foreign key references category(category_id),
    
)

-- insertion 

insert into films (film_id ,tittle,director,year_released) values (1,'batman','fasih','1999'),(2,'superman','masif','2002');
insert into category(category_id,category_name) values (12,'Romance'),(23,'Action');
insert into film_category (film_id,category_id) values (1,12),(2,23);

select * from films;
select * from category;
select * from film_category;

SELECT * from usertable;

-- while retriving data we have  three type of methods 
-- selection: with condition 
-- projection: whithout condition 
-- joins 

-- joins 

-- we have two types of format 


create table student (
    s_id int,
    sname varchar(20), 
    course_id int
    );

create table course (
    courseid int , 
    cname varchar(20), 
    chrs int
    );

SELECT * from student;
SELECT * from course;


-- 1 ANSI
-- ANSI-format (new style format)
-- keyword 'ON'

-- 1 inner join =
    -- we join tables on the basis of equality 

-- 2 outer join 
  -- outer join gives us data on ineuqality and equality
            -- left outher join 
            -- right outer join 
            -- full outer join 

--Inner Join 
select * from student INNER JOIN course on student.course_id = course.courseid;
-- by using alinace
select * from student S inner join course C on S.course_id = C.courseid;

-- outer joins
select * from student S full outer join course C on S.course_id = C.courseid;
select * from student S Left outer join course C on S.course_id = C.courseid;
select * from student S right outer join  course C on S.course_id = C.courseid;



-- 2 NON-ANS (format)
-- Keyword 'Where'

-- 1 equi join =
-- 2 Non-equi join !=,<,>,<=,>=
-- 3 self join 

--equi join
select * from student S , course C where S.course_id = C.courseid;
-- non equi join
select * from student S , course C where S.course_id < C.courseid;
-- self join 

create table cs_student (s_id int , sname varchar(20), cgpa float);

SELECT * from cs_student;

-- for self join first create alliaces 

select * from cs_student s1 , cs_student s2 where s1.s_id = 2 and s1.cgpa = s2.cgpa ;

-- the only main different between ANSI and Non-ANSI is of their format


-- SUB QURIES / NESTED QURIES 

-- Query with in anohter query is called sub query 
    -- sub Query is firther divided into two types 
        -- inner query 
        -- outer query 

    -- Non corelated (outer query is dependent on inner query)
        -- inner query will execute first 
        -- outer query will execute
            -- types of non corelated query 
                -- single / simple row (query dependet on only one row e.g max salary )
                -- multi row 
    -- Corelated 
        -- outer query will execute first 
        -- inner query will execute  


create table l_students (s_id int , sname varchar (20),cgpas float , dept varchar (20));
select * from l_students;

select * from l_students where cgpas = (select max(cgpas) from l_students);

-- inner query: select max(cgpas) from l_students
-- outer query: select * from l_students where cgpas

select * from l_students where dept in ((select dept from l_students where sname = 'fasih'), (select dept from l_students where sname = 'shiza'))


--- Lab Task 

create table cars(
    c_id int ,
    c_name varchar(20),
    c_color varchar(20)
)

create table carmodle(
    c_id int,
    c_modle varchar(20),
    c_horsepower varchar(20)

)

SELECT * from cars;
SELECT * from carmodle;

--ANSI FORMAT

-- inner joins 
select * from cars  C inner join carmodle  M on C.c_id = M.c_id;
-- outer joins
-- left outer join
select * from cars C left outer join carmodle M on C.c_id = M.c_id;
-- right outer join
select * from cars C right outer join carmodle M on C.c_id = M.c_id;
-- full outer join
select * from cars C full outer join carmodle M on C.c_id = M.c_id;

-- NON ANSI FORMAT

-- equi join
select * from cars C , carmodle M where C.c_id = M.c_id;
-- non equi join
select * from cars C , carmodle M where C.c_id < M.c_id;
select * from cars C , carmodle M where C.c_id > M.c_id;
-- self join


