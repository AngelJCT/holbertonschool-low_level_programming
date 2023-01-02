#include "search_algos.h"
/**
 *binary_search-function to binary search an array of integers
 *@array: pointer to first element in the array
 *@size: number of elements
 *@value: value to search for
 *Return: index of value or -1 if its not found
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int high, mid, low, i;

	low = 0;
	high = size - 1;

	if (array == NULL)
		return (-1);

	while (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		mid = (low + high) / 2;
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value > array[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
