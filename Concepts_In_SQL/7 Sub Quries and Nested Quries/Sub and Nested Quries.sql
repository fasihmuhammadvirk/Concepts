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
