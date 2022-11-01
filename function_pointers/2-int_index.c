#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 *int_index-function that searches for an integer
 *@array: pointer to function with elements
 *@size: number of elements in the array
 *@cmp: pointer to function
 *Return: index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}

	if (cmp == NULL)
	{
		return (-1);
	}
	else
	{
		int (*index)(int);

		index = cmp;

		for (i = 0; i < size; i++)
		{
			if ((*index)(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
