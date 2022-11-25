# Hash Tables
### Hash tables are a data structure that implements an associative array or dictionary. It is an abstract data type that maps keys to values. A hash table uses a hash function to compute an index, also called a hash code, into an array of buckets or slots, from which the desired value can be found. During lookup, the key is hashed and the resulting hash indicates where the corresponding value is stored.
### Table of content:
***0-hash_table_create.c***

<sub>Write a function that creates a hash table. Where size is the size of the array. Returns a pointer to the newly created hash table. If something went wrong, your function should return NULL.</sub>

***1-djb2.c***

<sub>Write a hash function implementing the djb2 algorithm.</sub>

***2-key_index.c***

<sub>Write a function that gives you the index of a key.
Where key is the key. 
And size is the size of the array of the hash table. 
This function should use the hash_djb2 function that you wrote earlier.
Returns the index at which the key/value pair should be stored in the array of the hash table.</sub>

***3-hash_table_set.c***

<sub>Write a function that adds an element to the hash table.
Where ht is the hash table you want to add or update the key/value to.
key is the key. key can not be an empty string.
And value is the value associated with the key. value must be duplicated. value can be an empty string.
Returns: 1 if it succeeded, 0 otherwise.
In case of collision, add the new node at the beginning of the list.</sub>

***4-hash_table_get.c***

<sub>Write a function that retrieves a value associated with a key.
where ht is the hash table you want to look into.
And key is the key you are looking for.
Returns the value associated with the element, or NULL if key couldn’t be found.</sub>

***5-hash_table_print.c***

<sub>Write a function that prints a hash table.
You should print the key/value in the order that they appear in the array of hash table.
Order: array, list.
If ht is NULL, don’t print anything.</sub>

***6-hash_table_delete.c***

<sub>Write a function that deletes a hash table.</sub>
