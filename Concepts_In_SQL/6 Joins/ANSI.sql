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
