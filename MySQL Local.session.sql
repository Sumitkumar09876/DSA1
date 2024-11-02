CREATE TABLE books (
    id INT PRIMARY KEY AUTO_INCREMENT,
    title VARCHAR(255) NOT NULL,
    author VARCHAR(100) NOT NULL,
    published_year INT,
    genre VARCHAR(50)
);
INSERT INTO books (title, author, published_year, genre) VALUES
('The Great Gatsby', 'F. Scott Fitzgerald', 1925, 'Fiction'),
('1984', 'George Orwell', 1949, 'Dystopian'),
('To Kill a Mockingbird', 'Harper Lee', 1960, 'Fiction'),
('The Catcher in the Rye', 'J.D. Salinger', 1951, 'Fiction'),
('Brave New World', 'Aldous Huxley', 1932, 'Dystopian');

Create Table Employ(
    EmpID varchar(255)
);

Insert Into Employ(EmpID)Values
(1),
(2),
(3);

Select * from books;


use mydata;

Create TABLE student(
    id INT PRIMARY KEY,
    name Varchar(50),
    age INT NOT NULL
);

Insert into student values
(1,'Sumit',21),
(2,'Kumar',21);

Select * from student;
show tables;
show databases;

drop table employ;
show tables;