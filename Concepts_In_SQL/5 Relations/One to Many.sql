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