--add a column into an existing table 
alter table studentinformation Add  sname varchar(100);

--renaming the table and a cloum 
exec sp_rename 'studentinfomation', 'studentinformation';
sp_rename 'studentinformation.fname','fathern';

--alter the datatype of an exsting column 
alter table studentinformation alter column cgpa float;

--display
sp_help studentinformation;