-- Source: https://www.youtube.com/watch?v=dzvN6E53HYs&list=TLPQMjgwNjIwMjJ7zz2i71RaQQ&index=2

CREATE DATABASE newdb;

SHOW DATABASES;

USE newdb;

CREATE TABLE User (
    iduser INT NOT NULL AUTO_INCREMENT,
    username VARCHAR(32) NOT NULL,
    email VARCHAR(32) NOT NULL,
    phone INT(10) NOT NULL,
    age INT(2) NOT NULL,
    PRIMARY KEY (iduser)
);

DROP TABLE USER;

INSERT INTO User (username, email, phone, age) 
VALUES
    ('john', 'john@email.com', '0123456789', 21),
    ('ian', 'ian@email.com', '0123456789', 23),
    ('jane', 'jane@email.com', '0123456789', 25),
    ('smith', 'smith@email.com', '0123456789', 28),
    ('david', 'david@email.com', '0123456789', 30);

SELECT * FROM User;

-- Queries tips and tricks:

-- +------------------------------------------------------------------------------------------+

-- Ranges

-- Range (inefficient way)
SELECT * FROM User WHERE age >= 21 AND age <= 30;

-- Specfic values
SELECT * FROM User Where age IN(23, 25, 28);

-- Range (efficient way)
SELECT * FROM User Where age BETWEEN 21 AND 30;

-- +------------------------------------------------------------------------------------------+
-- TIME:

SELECT NOW();

SELECT CURRENT_DATE();

SELECT DATE_ADD(NOW(), INTERVAL 7 DAY); 
SELECT DATE_SUB(CURRENT_DATE, INTERVAL 7 DAY);

SELECT DATEDIFF(CURRENT_DATE, '2022-01-01');

-- +------------------------------------------------------------------------------------------+
-- SELECT:

SELECT * FROM User;

SELECT COUNT(iduser) FROM User;

-- Show only distinct phone numbers
SELECT DISTINCT phone FROM User;

SELECT COUNT(DISTINCT phone) FROM User;

-- +------------------------------------------------------------------------------------------+
-- RESET:

ALTER TABLE User AUTO_INCREMENT = 8;

INSERT INTO User (username, email, phone, age) 
VALUE 
    ('anthony', 'anthony@email.com', '0123456789', 33);

DELETE FROM User Where iduser = 6;

SELECT * FROM User;

-- +------------------------------------------------------------------------------------------+
-- Automatic updates:

ALTER TABLE User ADD full_name VARCHAR(255) NOT NULL AFTER iduser;

DESCRIBE User;

ALTER TABLE User MODIFY COLUMN full_name VARCHAR(32) NOT NULL;

SELECT * FROM User;

UPDATE User SET full_name = 'John Smith' WHERE iduser = 1;
UPDATE USER SET full_name = 'Ian Johnson' WHERE iduser = 2;
UPDATE USER SET full_name = 'Jane Williams' WHERE iduser = 3;
UPDATE USER SET full_name = 'Smith Johnson' WHERE iduser = 4;
UPDATE USER SET full_name = 'David Brown' WHERE iduser = 5;
UPDATE USER SET full_name = 'Anthony Jones' WHERE iduser = 8;


-- Begins here (complete info)

ALTER TABLE User 
ADD COLUMN first_name VARCHAR(16) NOT NULL AFTER full_name,
ADD COLUMN last_name VARCHAR(16) NOT NULL AFTER first_name;

ALTER TABLE User DROP COLUMN first_name;
ALTER TABLE User DROP COLUMN last_name;

DESCRIBE User;

SHOW FULL COLUMNS FROM User;

SELECT * FROM User;

-- remove white spaces from full_name if it exists
UPDATE User 
SET full_name = LTRIM(RTRIM(full_name)),
-- separator, from left is positive position
first_name = SUBSTRING_INDEX(full_name, ' ', 1),
-- separator, from right is negative position
last_name = SUBSTRING_INDEX(full_name, ' ', -1);

UPDATE User SET age = 30 WHERE iduser = 8;

-- group concat by age, usefull for example by subjects class grades
SELECT GROUP_CONCAT(age)
FROM User
GROUP BY age;
