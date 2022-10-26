#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_calloc - allocate memory for an array
 *@nmemb: number of elements
 *@size: amount of bytes
 *Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *call;
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	call = malloc(nmemb * sizeof(int));
	if (call == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		call[i] = 0;
	}
	return (call);
}
