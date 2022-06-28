
USE mydb;

SHOW TABLES;

DESCRIBE user;

SHOW FULL COLUMNS FROM user;

INSERT INTO user (username, email, password) 
VALUES
    ('ian', 'ian@email.com', '1234'),
    ('smith', 'smith@email.com', '1234'),
    ('james', 'james@email.com', '1234');

SELECT * FROM user;

DESCRIBE brand;

INSERT INTO brand (name)
VALUES
    ('Apple');

SELECT * FROM brand;

DESCRIBE product;

INSERT INTO product (name, idbrand, created_by)
VALUES 
    ('Mac', 1, 1),
    ('iPhone', 1, 2),
    ('iPad', 1, 3);

SELECT * FROM product;

SELECT P.idbrand, P.created_by, B.name FROM product AS P JOIN brand AS B ON P.idbrand = B.idbrand;

SELECT COUNT(idbrand) FROM brand;

SELECT COUNT(P.idbrand), B.name FROM product AS P JOIN brand AS B ON P.idbrand = B.idbrand GROUP BY P.idbrand;

SELECT * FROM product;

DESCRIBE order;

INSERT INTO order (iduser) 
VALUES
    (1),
    (2),
    (3);

SELECT * FROM order;

DESCRIBE order_detail;

INSERT INTO order_detail (order_idorder, product_idproduct) 
VALUES
    (1, 1),
    (2, 2),
    (3, 3);

SELECT * FROM order_detail;
