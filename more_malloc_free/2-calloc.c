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
	char *ccall;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	if (size == sizeof(char))
	{
		ccall = malloc(nmemb * size);
		if (ccall == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < nmemb; i++)
		{
			ccall[i] = '0';
		}
		return (ccall);
	}
	else
	{
	call = malloc(nmemb * sizeof(int));
	if (call == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		call[i] = 0;
	}
	}
	return (call);
}
