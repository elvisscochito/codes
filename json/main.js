/** @note JavaScript Object */

const user = {
    fullName: {
        name: 'John',
        lastName: 'Doe'
    },
    age: 21,
    email: 'john@email.com',
    phone: 1234567890,
    hobbies: ['code', 'read', 'sleep'],
    address: {
        state: 'California',
        city: 'San Francisco'
    },
    active: true
    /* method() {
        return 'im a method';
    } */
}

/** @note array of object users */
const friends = [
    {
        username: 'David',
        age: 23
    },
    {
        username: 'William',
        age: 25
    },
    {
        username: 'Ian',
        age: 28
    }
]

let output = '';

/* for (let i = 0; i < friends.length; i++) {
    output += `<li>${friends[i].username} - ${friends[i].age}</li>`;
} */

/* friends.map(friend => output += `<li>${friend.username} - ${friend.age}</li>`); */

friends.forEach(friend => output += `<li>${friend.username} - ${friend.age}</li>`);

document.getElementById('friends').innerHTML = output;

/** @note display a raw JavaScript Object */
console.log(user);

/** @note get access to a specific value */
console.log(user.fullName.name);
console.log(user.email);
console.log(user.hobbies[0]);

/** @note removed in the convert process */
/* console.log(user.method); */

/** @note convert from JS Object to JSON format */
console.log(JSON.stringify(user));

console.log(friends);
console.log(JSON.stringify(friends));

/** @note create friend property in user object */
user.friends = friends;
console.log(JSON.stringify(user));

/** @note convert from JSON format JSON.stringify() to JS Object wirh JSON.Parse() */
const userConverted = JSON.stringify(user);
console.log(userConverted);

const userReverted = JSON.parse(userConverted);
console.log(userReverted);

/** @note fetch usrs from user.json file */
let userOutput = '';

fetch('user.json')
    /** @note convert to json */
    .then(response => response.json())

    /** @note automatically convert json to javascript object(parse) so it can be use now */
    .then(data => {
        console.log(data);
        data.forEach(user => userOutput += `<li>${user.fullName.name} ${user.fullName.lastName}</li>`);
        document.getElementById('users').innerHTML = userOutput;

        /** @note so we can convert javascript object to json again */
        console.log(JSON.stringify(data));
    });

/** @note fetch post data from external server */

let postOutput = '';
fetch('https://jsonplaceholder.typicode.com/posts')
    .then(response => response.json())
    .then(data => {
        console.log(data);
        data.forEach(post => postOutput += `<li>${post.title} - ${post.body}</li>`);
        document.getElementById('posts').innerHTML = postOutput;
    });
