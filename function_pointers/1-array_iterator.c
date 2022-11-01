#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 *array_iterator-prints an array
 *@array: pointer to the array
 *@size: size of the array
 *@action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	void (*fparr)(int);

	fparr = action;

	for (i = 0; i < size; i++)
	{
		(*fparr)(array[i]);
	}
}
