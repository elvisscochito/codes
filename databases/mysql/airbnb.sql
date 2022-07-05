-- Source: https://www.youtube.com/watch?v=Cz3WcZLRaWc&t=615s

CREATE DATABASE airbnb;

SHOW DATABASES;

USE airbnb;

CREATE TABLE User (
    iduser INT NOT NULL AUTO_INCREMENT,
    email VARCHAR(32) NOT NULL,
    bio TEXT NOT NULL,
    country VARCHAR(2) NOT NULL,
    PRIMARY KEY (iduser)
    -- UNIQUE INDEX email_idx (email ASC) VISIBLE
);

SHOW TABLES;

INSERT INTO User (email, bio, country) 
VALUES 
    ('john@email.com', 'Home', 'US'), 
    ('ian@email.com', 'Home', 'US'), 
    ('smith@email.com', 'Home', 'US');

SELECT iduser, email FROM User
WHERE country = 'US'
OR iduser > 1
AND email LIKE '%email.com%'
ORDER BY iduser DESC
LIMIT 2;

-- Create a index (unique because the email cannnot be repeated)
CREATE UNIQUE INDEX email_idx ON User (email);

CREATE TABLE Room (
    idroom INT NOT NULL AUTO_INCREMENT,
    street VARCHAR(32) NOT NULL,
    iduser INT NOT NULL,
    PRIMARY KEY (idroom),
    CONSTRAINT fk_room_user FOREIGN KEY (iduser) REFERENCES User (iduser)
);

INSERT INTO Room (street, iduser) 
VALUES
    ('123 SF St', 1),
    ('456 SD St', 2),
    ('789 LA St', 3);

SELECT * FROM User AS U INNER JOIN Room AS R On R.iduser = U.iduser;

CREATE TABLE Booking (
    idbooking INT NOT NULL AUTO_INCREMENT,
    idguest INT NOT NULL,
    idroom INT NOT NULL,
    check_in DATETIME NOT NULL,
    PRIMARY KEY (idbooking),
    CONSTRAINT fk_booking_user FOREIGN KEY (idguest) REFERENCES User (iduser),
    CONSTRAINT fk_booking_room FOREIGN KEY (idroom) REFERENCES Room (idroom)
);

INSERT INTO Booking (idguest, idroom, check_in) 
VALUES
    (1, 1, '2020-01-01 23:11:17'),
    (2, 2, '2020-01-01 23:11:17'),
    (3, 3, '2020-01-01 23:11:17');

SELECT * FROM Booking;

-- Rooms a user has booked
SELECT B.idguest, R.street, B.check_in FROM Booking AS B INNER JOIN Room AS R ON B.idguest = R.iduser;

-- Guests who stayed in a room
SELECT B.idguest, B.idroom, U.email FROM Booking AS B INNER JOIN User AS U ON B.idguest = U.iduser WHERE idroom = 2;

DROP DATABASE airbnb;
