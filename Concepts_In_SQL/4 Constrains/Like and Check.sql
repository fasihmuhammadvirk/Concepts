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