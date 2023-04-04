--Not Null Constraint 

create table csstudent2(std_id int not null , std_name varchar(50) not null);
insert csstudent2 values(2001,'Muhammad');
insert csstudent2 values(2002,'Ali');
insert csstudent2 values (2003,'Ali'); 
insert csstudent2 values(2002,'Khan'); 
insert csstudent2 values (NULL,NULL);-- it will not be accepted as null vlaues are not accepted
SELECT * from csstudent2;
