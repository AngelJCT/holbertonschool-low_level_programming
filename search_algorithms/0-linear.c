#include "search_algos.h"
/**
 *linear_search-function to linear search an array of integers
 *@array: pointer to first element of the array
 *@size: number of elements in the array
 *@value: value to search for
 *Return: the index of value or -1 if its not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
			printf("%d\n", array[i]);
		}
	}
	return (-1);
}
