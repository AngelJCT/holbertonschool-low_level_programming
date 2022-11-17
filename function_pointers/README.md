# Function pointers
### Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code and we do not allocate deallocate memory using function pointers.
### Table of content:
***0-print_name.c***

<sub>Write a function that prints a name.</sub>

***1-array_iterator.c***

<sub>Write a function that executes a function given as a parameter on each element of an array. Where size is the size of the array, and action is a pointer to the function you need to use.</sub>

***2-int_index.c***

<sub>Write a function that searches for an integer. Where size is the number of elements in the array array.
cmp is a pointer to the function to be used to compare values.
int_index returns the index of the first element for which the cmp function does not return 0.
If no element matches, return -1.
If size <= 0, return -1.</sub>

***3-calc.h***

<sub>This file should contain all the function prototypes and data structures used by the program.</sub>

***3-op_functions.c***

<sub>This file should contain the 5 following functions (not more):
op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);</sub>

***3-get_op_func.c***

<sub>This file should contain the function that selects the correct function to perform the operation asked by the user. Where s is the operator passed as argument to the program.
This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: get_op_func("+") should return a pointer to the function op_add.</sub>

***3-main.c***

<sub>This file should contain your main function only.</sub>
