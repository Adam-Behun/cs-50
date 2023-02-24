# Databases

## Relational model

1. Relational databases store data in tables, with each table containing rows (records) and columns (fields).
    
2. Tables in a relational database are related to one another through the use of foreign keys.
    
3. One of the key benefits of a relational database is that it allows for data to be organized in a logical and structured way, making it easier to retrieve and manipulate.
    
4. The Structured Query Language (SQL) is used to interact with relational databases. It allows users to create, modify, and query the data stored in the database.
    
5. Normalization is a process used to design and organize the tables in a database in a way that reduces redundancy and dependency, making the database more efficient and easier to maintain.
    
6. Indexes are used to improve the performance of queries by allowing the database to more quickly locate specific records.
    
7. Relational databases support transactions, which allow multiple operations to be treated as a single unit of work. This ensures that the database remains in a consistent state, even if an error occurs during the transaction.
    
8. Relational databases are often used with a database management system (DBMS), which provides tools for managing the database and its data.
    
9. There are several different types of relational databases, including MySQL, Oracle, and Microsoft SQL Server.
    
10. The design of a relational database is crucial for its performance and scalability. Data engineers need to carefully plan the structure of the database, including the data types and sizes of the fields, the relationships between tables, and the use of indexes.

## Non-relational model

1. Non-relational databases, also known as NoSQL databases, do not store data in tables like relational databases do. Instead, they use alternative data models, such as key-value pairs, documents, graphs, or columns.
    
2. Non-relational databases are designed to be flexible and scalable, making them well-suited for handling large amounts of unstructured or semi-structured data.
    
3. Non-relational databases do not use SQL as their query language. Instead, they often use proprietary languages or more general-purpose languages such as JavaScript.
    
4. Non-relational databases are typically distributed, meaning that the data is stored across multiple servers or nodes. This allows them to scale horizontally by adding more nodes as needed.
    
5. Non-relational databases often have weaker consistency guarantees than relational databases, meaning that it may be possible for different nodes in the database to have slightly different data at the same time.
    
6. Non-relational databases are often designed to support specific use cases, such as real-time data processing, large-scale data storage, or high-speed data access.
    
7. Non-relational databases may not support transactions or ACID (atomicity, consistency, isolation, durability) guarantees, which can make it more challenging to ensure data integrity in certain situations.
    
8. Some examples of non-relational databases include MongoDB, Cassandra, and Redis.
    
9. Non-relational databases can be faster and more efficient than relational databases for certain types of queries or workloads, but they may not be as well-suited for complex queries or transactions.
    
10. Data engineers need to carefully evaluate the specific requirements of their application and choose the appropriate type of database, whether it is a relational or non-relational database, based on the needs of the application.