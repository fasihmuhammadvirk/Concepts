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

-- NON ANSI FORMAT

-- equi join
select * from cars C , carmodle M where C.c_id = M.c_id;
-- non equi join
select * from cars C , carmodle M where C.c_id < M.c_id;
select * from cars C , carmodle M where C.c_id > M.c_id;
-- self join
