#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - duplicate a string
 *@str: string to be duplicated
 *Return: duplicated string
 *
 */
char *_strdup(char *str)
{
	char *dup;
	char *p;
	int l;

	if (str == NULL)
	{
		return (NULL);
	}

	l = strlen(str);
	dup = malloc((l + 1) * sizeof(char));

	if (dup == 0)
	{
		return (NULL);
	}
	p = dup;
	while (*str)
	{
		*p = *str;
		p++;
		str++;
	}
	*p = '\0';
	return (dup);
}
