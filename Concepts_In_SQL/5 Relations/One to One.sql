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
