#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - concatenate two strings
 *@s1: first string  to concatenate
 *@s2: second string to concatenate
 *Return: strings concatenated into a new pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size, len1, len2;
	int i;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		len1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		len2 = strlen(s2);
	}
	size = len1 + len2;
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		ptr[len1 + i] = s2[i];
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr[size + 1] = '\0';
	return (ptr);
}
