-- CREATE

-- Create a new database
CREATE DATABASE mydatabase;

-- Show databases;
SHOW DATABASES;

-- Select a database
use mydatabase;

CREATE TABLE animals (
    id INT,
    species VARCHAR(255) NOT NULL,
    status VARCHAR(255) NOT NULL,
    PRIMARY KEY (id)
);

CREATE TABLE users (
    id INT NOT NULL AUTO_INCREMENT,
    name VARCHAR(255) NOT NULL,
    age INT NOT NULL,
    email VARCHAR(255) NOT NULL,
    PRIMARY KEY (id)
);

CREATE TABLE products (
    id INT NOT NULL AUTO_INCREMENT,
    created_by INT NOT NULL,
    brand VARCHAR(255) NOT NULL,
    PRIMARY KEY (id),
    CONSTRAINT fk_products_users FOREIGN KEY (created_by) REFERENCES users (id)
);

-- +------------------------------------------------------------------------------------------+

-- naming convention
RENAME TABLE products to product;

-- Change/modify table
ALTER TABLE animals MODIFY COLUMN id INT AUTO_INCREMENT;

-- Insert a new record into the table
INSERT INTO animals (species, status) VALUES ('cat', 'alive');
INSERT INTO animals (species, status) VALUES ('dog', 'alive'), ('hamster', 'alive');

INSERT INTO users (name, age, email) VALUES ('John', 25, 'john@email.com'), ('Ian', 21, 'ian@email.com'), ('Jane', 23, 'janet@email.com');

ALTER TABLE product ADD name VARCHAR(255) NOT NULL AFTER id; -- FIRST and by default add at the end

/* ALTER TABLE product CHANGE COLUMN created_by author VARCHAR(255) NOT NULL; */

INSERT INTO product (name, created_by, brand) 
VALUES
    ('iPad', 1, 'Apple'), 
    ('iPhone', 1, 'Apple'), 
    ('Watch', 2, 'Apple'), 
    ('Mac', 1, 'Apple'), 
    ('TV', 3, 'Apple'), 
    ('HomePod', 2, 'Apple');

-- +------------------------------------------------------------------------------------------+

-- READ

-- Show tables
SHOW tables;

-- Show creation query
SHOW CREATE TABLE animals;

-- Show table records
SELECT * FROM animals; -- Select all records
SELECT * FROM animals WHERE id = 2; -- Select a record by id (INT)
SELECT * FROM animals WHERE species = 'dog'; -- Select a record by species (VARCHAR)
SELECT * FROM animals WHERE id = 2 AND species = 'dog'; -- Select a record with a logical condition 

SELECT * FROM users;
SELECT * FROM users limit 1;
SELECT * FROM users WHERE age > 21;
SELECT * FROM users WHERE age >= 21;

SELECT * FROM users WHERE age >= 21 AND email = 'ian@email.com';

SELECT * FROM users WHERE age > 21 OR email = 'ian@email.com';

SELECT * FROM users WHERE email != 'ian@email.com';
SELECT * FROM users WHERE age BETWEEN 21 AND 23;

SELECT * FROM users WHERE email like '%email.com%';
SELECT * FROM users WHERE email like '%email.com';
SELECT * FROM users WHERE email like 'email.com%';

SELECT * FROM users ORDER BY age ASC;
SELECT * FROM users ORDER BY age DESC;

SELECT id, name, email as correo FROM users;

SELECT max(age) as max_age_user FROM users;
SELECT min(age) as max_age_user FROM users;

SELECT id, max(age) as age, email FROM users GROUP BY id, age, email LIMIT 1;

SELECT U.id, U.email, P.name FROM users AS U JOIN product AS P ON U.id = P.created_by; -- INNER JOIN, LEFT and RIGHT JOIN are also available

SELECT P.id, P.name, U.id, U.name FROM product AS P CROSS JOIN users AS U;

SELECT COUNT(id), brand FROM product GROUP BY brand;

SELECT COUNT(P.id), U.name FROM product AS P JOIN users AS U ON U.id = P.created_by GROUP BY P.created_by HAVING COUNT(P.id) >= 2;

-- +------------------------------------------------------------------------------------------+

-- UPDATE

-- Update an existing record
UPDATE animals SET species = 'bird' WHERE id = 3; -- Safe mode
UPDATE animals SET species = 'bird' WHERE status = 'alive'; -- Unsafe mode

-- +------------------------------------------------------------------------------------------+

-- DELETE

-- Delete an existing record
DELETE FROM animals WHERE status = 'alive'; -- Unsafe mode
DELETE FROM animals WHERE id = 1 AND status = 'alive'; -- Safe mode with id

-- Delete database;
DROP DATABASE myDatabase;

mysqldump -u root -p myDatabase > backup.sql;
