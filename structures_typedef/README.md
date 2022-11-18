# Structures, typedef
### A structure is a user defined data type available in C that allows to combine data items of different kinds. 
### The typedef is a keyword that is used in C programming to provide existing data types with a new name. typedef keyword is used to redefine the name already the existing name. When names of datatypes become difficult to use in programs, typedef is used with user-defined datatypes, which behave similarly to defining an alias for commands.
### Table of content:
***dog.h***

<sub>Define a new type struct dog with the following elements:
name, type = char *.
age, type = float.
owner, type = char *.</sub>

***1-init_dog.c***

<sub>Write a function that initialize a variable of type struct dog.</sub>

***2-print_dog.c***

<sub>Write a function that prints a struct dog. If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.</sub>

***3-dog.h***

<sub>Define a new type dog_t as a new name for the type struct dog.</sub>

***4-new_dog.c***

<sub>Write a function that creates a new dog. You have to store a copy of name and owner.
Return NULL if the function fails.</sub>

***5-free_dog.c***

<sub>Write a function that frees dogs.</sub>
