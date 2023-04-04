--Check Constraint

create table csstudent3 (std_id int , std_name varchar(50),age int check (age>20));
insert csstudent3 values (2001,'Muhammad',21);
insert csstudent3 values (2002,'Ali',22);
insert csstudent3 values (2003,'Ali',23);
insert csstudent3 values (2002,'khan',19);-- it will not accept as the age should be greater than 20
insert csstudent3 values (Null,Null,Null);
SELECT * from csstudent3;
