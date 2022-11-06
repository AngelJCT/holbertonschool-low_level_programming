# Pointers, arrays and strings.
### Pointers are variables which contains a memory address.
### An array is a variable that can store multiples values. In order for the values to be stored togethers, they have to be of the same data type.
### String in C are a sequence of characters terminated with a null character ‘\0’. Strings are defined as an array of characters. The difference between a character array and a string is the string is terminated with a unique character ‘\0’.
### Table of contents:
***0-reset_to_98.c***

<sub>Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.</sub>

***0-strcat.c***

<sub>Write a function that concatenates two strings. This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte. Returns a pointer to the resulting string dest.</sub>

***0-memeset***

<sub>Write a function that fills memory with a constant byte. The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b. Returns a pointer to the memory area s.</sub>

***1-swap.c***

<sub>Write a function that swaps the value of two integers.</sub>

***1-strncat***

<sub>Write a function that concatenates two strings. The _strncat function is similar to the _strcat function, except that, it will use at most n bytes from src; and src does not need to be null-terminated if it contains n or more bytes. Return a pointer to the resulting string dest.</sub>

***1-memcpy***

<sub>Write a function that copies memory area. The _memcpy() function copies n bytes from memory area src to memory area dest. Returns a pointer to dest.</sub>

***2-strlen.c***

<sub>Write a function that returns the length of a string.</sub>

***2-strncpy***

<sub>Write a function that copies a string.</sub>

***2-strchr.c***

<sub>Write a function that locates a character in a string. Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found.</sub>

***3-puts.c***

<sub>Write a funcction that prints a string, followed by a new line, to stdout.</sub>

***3-strcmp***

<sub>Write a function that compares two strings.</sub>

***3-strspn.c***

<sub>Write a function that gets the length of a prefix substring. Returns the number of bytes in the initial segment of s which consist only of bytes from accept.</sub>

***4-print_rev.c***

<sub>Write a function that prints a string, in reverse, followed by a new line.</sub>

***4-rev_array.c***

<sub>Write a function that reverses the content of an array of integers. Where n is the number of elements of the array.</sub>

***4-strbrk.c***

<sub>Write a function that searches a string for any of a set of bytes. The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept. Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found.</sub>

***5-rev_string.c***

<sub>Write a function that reverses a string.</sub>

***5-string_toupper.c***

<sub>Write a function that changes all lowercase letters of a string to uppercase.</sub>

***5-strstr.c***

<sub>Write a function that locates a substring. The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared. Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.</sub>

***6-puts2.c***

<sub>Write a function that prints every other character of a string, starting with the first character, followed by a new line.</sub>

***6-cap_string.c***

<sub>Write a function that capitalizes all words of a string. Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }.</sub>

***7-puts_half.c***

<sub>Write a function that prints half of a string, followed by a new line. The function should print the second half of the string. If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2.</sub>

***7-leet.c***

<sub>Write a function that encodes a string into 1337.
Letters a and A should be replaced by 4. 
Letters e and E should be replaced by 3. 
Letters o and O should be replaced by 0. 
Letters t and T should be replaced by 7. 
Letters l and L should be replaced by 1. 
You can only use one if in your code. You can only use two loops in your code. You are not allowed to use switch. You are not allowed to use any ternary operation.</sub>

***7-print_chessboard.c***

<sub>Write a function that prints the chessboard.</sub>

***8-print_array.c***

<sub>Write a function that prints n elements of an array of integers, followed by a new line. Where n is the number of elements of the array to be printed. Numbers must be separated by comma, followed by a space. The numbers should be displayed in the same order as they are stored in the array.</sub>

***8-print_diagsumms.c***

<sub>Write a function that prints the sum of the two diagonals of a square matrix of integers.</sub>

***9-strcpy.c***

<sub>Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest. Return value: the pointer to dest.</sub>
