# C - malloc & free
### The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will retrun a pointer to the reseved space.
### When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.
### The free function frees the memory space which have been allocated by a previous call to malloc.
### Table of content:
***0-create_array.c***

<sub>Write a function that creates an array of chars, and initializes it with a specific char. Returns NULL if size = 0. Returns a pointer to the array, or NULL if it fails.</sub>

***1-strdup.c***

<sub>Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter. The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free. Returns NULL if str = NULL. On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available.</sub>

***2-str_concat.c***

<sub>Write a function that concatenates two strings. The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated. If NULL is passed, treat it as an empty string. The function should return NULL on failure.</sub>

***3-alloc_grid.c***

<sub>Write a function that returns a pointer to a 2 dimensional array of integers. Each element of the grid should be initialized to 0.
The function should return NULL on failure.
If width or height is 0 or negative, return NULL.</sub>

***4-free_grid.c***

<sub>Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.</sub>
