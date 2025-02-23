# HashTable
Hash Table Implementation in C with DJB2 Hash Function
Overview
This project implements a hash table in C, utilizing the DJB2 hash function for efficient key hashing. The hash table supports basic operations such as insertion, deletion, and lookup.

Features
DJB2 Hash Function: A widely-used hash function known for its simplicity and effectiveness in distributing keys uniformly.
Dynamic Resizing: The hash table can dynamically resize to maintain performance as the number of elements grows.
Collision Handling: Implements separate chaining to handle collisions, ensuring that multiple keys can hash to the same index without data loss.
Functions
Insert: Adds a key-value pair to the hash table.
Delete: Removes a key-value pair from the hash table.
Lookup: Retrieves the value associated with a given key.
Resize: Automatically resizes the hash table when the load factor exceeds a certain threshold.
