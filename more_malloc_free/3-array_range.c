#include "main.h"
#include <stdlib.h>
/**
 *array_range - print array of integers
 *@min: smaller number
 *@max: bigger number
 *Return: array of numbers from min to max
 */
int *array_range(int min, int max)
{
	int i, j, n;
	int *p;

	if (min > max)
	{
		return (NULL);
	}

	n = min - max;
	if (n == 0)
	{
		n = 1;
	}

	p = malloc((sizeof(int) * n) + 4);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min, j = 0; j < n; i++, j++)
	{
		p[j] = i;
	}
	return (p);
}
