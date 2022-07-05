-- CRUD

-- +------------------------------------------------------------+

-- CREATE

CREATE DATABASE my_database;

SHOW DATABASES;

USE my_database;

CREATE TABLE Users (
   user_id INT NOT NULL AUTO_INCREMENT,
   username VARCHAR(32) NOT NULL,
   email VARCHAR(32) NOT NULL,
   phone INT(10) NOT NULL,
   PRIMARY KEY (user_id)
   /* UNIQUE INDEX username_idx (username ASC) VISIBLE,
   UNIQUE INDEX email_idx (email ASC) VISIBLE,
   UNIQUE INDEX phone_idx (phone ASC) VISIBLE */
);

-- Allows faster data access
CREATE UNIQUE INDEX username_idx ON User (username);
CREATE UNIQUE INDEX email_idx ON User (email);
CREATE UNIQUE INDEX phone_idx ON User (phone);

INSERT INTO Users (username, email, phone) 
VALUES
   ('james', 'james@email.com', 1234567890),
   ('david', 'david@email.com', 1234567890),
   ('ian', 'ian@email.com', 1234567890),
   ('john', 'john@email.com', 1234567890),
   ('robert', 'robert@email.com', 1234567890);

-- +------------------------------------------------------------+

-- READ

-- Check current database
SELECT DATABASE();

-- Show all tables
SHOW TABLES;

-- Show creation query
SHOW CREATE TABLE User;

-- Show User table details
DESCRIBE User;

-- Show even more User table details
SHOW FULL COLUMNS FROM User;

-- Show all table records
SELECT * FROM User;

-- Select specific columns
SELECT username, email FROM User;

-- Select by int
SELECT * FROM User WHERE user_id = 1;

-- Staments with conditionals:

-- Select by varchar
SELECT * FROM User WHERE username = 'james';

-- Show only 3 records
SELECT * FROM User limit 3;

SELECT * FROM User WHERE age >= 21;

-- Range (inefficient way)
SELECT * FROM User WHERE age >= 21 AND age <= 30;

-- Range (efficient way)
SELECT * FROM User Where age BETWEEN 21 AND 30;

-- Range (Specific values)
SELECT * FROM User WHERE age IN(23, 25, 28);

SELECT * FROM USER WHERE user_id = 1 OR username = 'james';

SELECT * FROM User WHERE email != 'james@email.com';

-- Match wherever in email
SELECT * FROM User WHERE email like '%email.com%';

-- Match at the begin in email
SELECT * FROM User WHERE email like '%email.com';

-- Match at the end in email
SELECT * FROM User WHERE email like 'email.com%';

SELECT username, age FROM User ORDER BY age ASC;

SELECT * FROM User ORDER BY age DESC;

-- Alias
SELECT user_id, username, email AS correo FROM User;

SELECT MAX(age) FROM User;
SELECT MIN(age) FROM User;

SELECT COUNT(user_id) FROM User;

SELECT DISTINCT phone FROM User;

SELECT COUNT(DISTINCT phone) FROM User;



-- Other (datetime):

-- Date and time
SELECT NOW();

-- Only date
SELECT CURRENT_DATE();

SELECT DATE_ADD(NOW(), INTERVAL 7 DAY);
SELECT DATE_SUB(CURRENT_DATE, INTERVAL 7 DAY);

SELECT DATEDIFF(CURRENT_DATE, '2022-01-01');

-- +------------------------------------------------------------+

-- UPDATE

RENAME TABLE Users TO User;

-- After for specific position (first is also avalible)
ALTER TABLE User ADD age INT(3) NOT NULL AFTER email;

-- By default add at the end
ALTER TABLE User ADD days INT(2) NOT NULL;

ALTER TABLE User ADD drop_column INT(2) NOT NULL;

ALTER TABLE User ADD status VARCHAR(8) NOT NULL;

ALTER TABLE User DROP COLUMN drop_column;

ALTER TABLE User MODIFY COLUMN age INT(2) NOT NULL AFTER email;

ALTER TABLE User RENAME COLUMN age TO ages;
ALTER TABLE User CHANGE ages age INT(2) NOT NULL;

-- Reset automatic user_id to 8
ALTER TABLE User AUTO_INCREMENT = 8;

INSERT INTO User (username, email, age, phone, days) 
VALUES 
   ('anthony', 'anthony@email.com', 33, 1234567890, 5);

-- Update by INT (user_id allows safe mode)
UPDATE User SET age = 21 WHERE user_id = 1;
UPDATE User SET age = 23 WHERE user_id = 2;
UPDATE User SET age = 25 WHERE user_id = 3;
UPDATE User SET age = 28 WHERE user_id = 4;

-- Update by VARCHAR (username is on usafe mode)
UPDATE User SET age = 30 WHERE username = 'robert';

UPDATE User SET days = 10 WHERE user_id = 1;
UPDATE User SET days = 15 WHERE user_id = 2;
UPDATE User SET days = 20 WHERE user_id = 3;
UPDATE User SET days = 25 WHERE user_id = 4;
UPDATE User SET days = 35 WHERE user_id = 5;

UPDATE User SET status = 'active' WHERE days <= 30;
UPDATE User SET status = 'inactive' WHERE days > 30;

-- +------------------------------------------------------------+

-- DELETE

DELETE FROM User Where user_id = 4;

DELETE FROM User Where status = 'inactive';

DROP TABLE User;

DROP DATABASE my_database;
