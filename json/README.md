# JSON

*"JavaScript Object Notation" is a popular data format for data-interchange*

---

Source tutorial: [link](https://www.youtube.com/watch?v=LJzDHKPLWYw&list=TLPQMjgwNjIwMjJ7zz2i71RaQQ&index=5 "Youtube")
JSON validator: [link](https://jsonlint.com "JSONLint")

---

* A very popular data format used in many programming languages
* Is the representation of JavaScript object
* Lightweight data-interchange format
* Used in REST APIs (Representational State Transfer Application Programming Interface)
* Also used with databases as MySQL or MongoDB
* The app is just the interface for display data (the data isn't stored local, the app calls the server for the data itself)
* JSON format the data so it can be display everywhere
* Based in JavaScript but it works with almost any programming language
* Also used with AJAX
* Support multi data types like numbers, strings boolean, arrays, object (key/value pairs), null and so much more but methods, functions aren't allowed
* Key : value structured, double quotes is required in key, and value assignment is needed too
* A comma after any key/value pair is required except the last one
* The data piece it's closed between curly braces
* MIME types type (media data type) for example application/json, a systems send json to another system
* A very easy way to represent data, also it's very easy to write and read

---

__Example:__
```json
{
    "id": 1,
    "username": "@username",
    "active": true,
    "bio": "",
    /* nested object */
    "address": {
        "city": "Lost Angeles",
        "street": "Walk of Fame"
    },
    /* array */
    "hobbies": ["sleep", "code"]
}
```
