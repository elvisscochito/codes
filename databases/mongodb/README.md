# MongoDB

## About
*"A no relational (no-sql) database"*

## Installation:
* MongoDB Community Server: [link](https://www.mongodb.com/docs/manual/tutorial/install-mongodb-on-os-x/ "MongoDB Community Server")
> brew tap mongodb/brew

> brew install mongodb-community@5.0
* mongosh CLI (already include with MongoDB Community Server): [link](https://www.mongodb.com/docs/mongodb-shell/install/ "MongoDB mongosh CLI")
> brew install mongosh
* MongoDB Compass: [link](https://www.mongodb.com/try/download/compass "MongoDB Compass")

---

## Run:
> brew services start mongodb-community

> mongo

Source tutorial: [link](https://www.youtube.com/watch?v=61G8tP0gFLY "Youtube")

---

## Docs

* MongoDB Works with collections (is a group of documents equivalent to tables), documents (records) inside the collection and with fields (a key/value pair syntax within a document).
* JSON and JavaScript Object Record formats are allowed in fields
* It automatically created things if doesn't exits yet
* Auto-generated unique id's
* No schemas, tables, columns required
* Supports CRUD (Create, Read, Update, Delete) and also complex consults
* You can insert whatever you want into the collections because no schemas are defined

---

## __Commands in CRUD__

### __CREATE__

__show current database:__
```
db
db.getName()
```

__show all databases:__
```
show dbs
db.getMongo().getDBNames()
db.adminCommand('listDatabases')
```

__create and/or select a database:__
```
use database
```

__create a collection:__
```json
db.newCollection.insert({"key": "value"})
db.createCollection("Collection")
```

### __READ__

__show collections:__
```
show collections
db.getCollectionNames()
```

__create/insert a new document(record) into a collection__:
```
db.collection.insertOne()
db.collection.insertMany()
db.collection.insert() - older versions
```

__search all documents in the collection:__
```
db.collection.find()
db.collection.find().limit(3) -- limit the result of documents, allowed in many consults
db.collection.find().skip(1).limit(3) -- skip the first document and limit the result of documents, allowed in many consults
```

__search all documents in the collection that match the filter:__
```json
db.collection.find({"key": "value"})
db.collection.find({"key": "value"}).limit(3) -- limit the result of documents
db.collection.find({"key.nestedKey": "value"})
```

__sort by filter (more filter are allowed an apply in repeated documents):__
```json
db.collection.find().sort({"key": 1}) - (ascending)
db.collection.find().sort({"key": -1}) - (descending)
```

__sort by filter, skip and limit consult example:__
```json
db.collection.find({"key": "value"}).sort({"key": 1}).skip(1).limit(3)
```

__search with specific filter fields for include or exclude in the display:__
```json
db.collection.find({"key": "value"}, {"key": 1, "key(_id)": 0}) - (with 1 it shows match documents and display only that fields but with 0 it excludes that fields)
db.collection.find({}, {"key(_id)": 0}, {"key": 1}) - (with 0 it shows all documents and display other fields except that but with 1 it display only that fields)
```

__search one document in the collection and show the first one:__
```json
db.collection.findOne({"key": "value"})
```

__search and show the count of the documents that match the filter:__
```json
db.collection.countDocuments({"key": "value"})
```

__complex filter consults:__
```json
db.collection.find({"key": {$eq: "value"}}) - equal to

db.collection.find({"key": {$nq: "value"}}) - not equal to

db.collection.find({"key": {$not: {$lte: value}}})
- negates the expression, usually not very used because we have the other operators and it allowed null values, for example: db.collection.find({"key": {$not: {$eq: value}}}) means db.collection.find({"key": {$ne:  value}})

db.collection.find({"key": {$gt: value}}) - greater than

db.collection.find({"key": {$gte: value}}) - greater than equal to

db.collection.find({"key": {$lt: value}}) - less than

db.collection.find({"key": {$lte: value}}) - less than equal to

db.collection.find({"key": {$in: [value, "value"]}}) - search specific values (supports numbers and string but according to the type of the field)

db.collection.find({"key": {$nin: [value, "value"]}}) - search all other values except those (supports numbers and string but according to the type of the field)

db.collection.find({"key": {$exists: true, false}}) - search if the field exists and return only objects with that field, false return only objects without that field, but it only check if the key exits not if the key have a value itself

db.collection.find({"key": {$gte: value, $lte: value}}) - AND consult

db.collection.find({$and: [{"key": value}, {"key": "value"}]})
- AND in a more explicit way but not necessarily at all

db.collection.find({"key": value, "key": "value"}) - AND in a more implicit way and the most common one

db.collection.find({"key": {$type: "int/string/object/array/bool/null/date"}}) - search and returns only the documents that match that field type

db.collection.find({$or: [{"key": {$gt: value}}, {"key": "value"}]}) - OR, it search and returns only documents that match one or all of the filters

db.collection.find({"key": {$regex: "value"}}) - search with a regular expression
```

### __DELETE__

__delete a database:__
```
db.dropDatabase()
```

__display all commands:__
```
db.help()
```
