-- Unique Constrain

create table csstudent1(std_id int unique , std_name varchar(50)unique )

insert csstudent1 values(2001,'Muhammad');
insert csstudent1 values(2002,'Ali');
insert csstudent1 values (2001,'Ali');-- it will generate an error as the vlaues should be unique 
insert csstudent1 values(2002,'Khan');-- it will also not be accpeted 
insert csstudent1 values (NULL,NULL);
SELECT * from csstudent1;