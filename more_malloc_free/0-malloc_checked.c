#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocate memory
 *@b: memory to be allocated
 *Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(int) * b);

	if (p == NULL)
	{
		exit (3);
	}

	return (p);
}
