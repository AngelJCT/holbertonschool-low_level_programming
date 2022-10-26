#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocate memory
 *@b: memory to be allocated
 *Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(sizeof(char) * b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
