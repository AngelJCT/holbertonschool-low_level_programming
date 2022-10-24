#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *create_array - create an array of chars
 *@size: size of array
 *@c: characters of the array
 *Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc((size) * sizeof(char));

	if (a == 0)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[i] = '\0';
	return (a);
}
