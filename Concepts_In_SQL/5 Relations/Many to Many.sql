-- many to many 

create table films (

    film_id int primary key ,
    film_name varchar(100),
    director varchar(50),
    year_released varchar(50)
);

create table category (

    category_id int primary key,
    category_name varchar(50)
);

create table film_category(

    film_id int foreign key references films(film_id),
    category_id int foreign key references category(category_id),
    
)