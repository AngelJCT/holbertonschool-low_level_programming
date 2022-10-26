#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - concatenate two strings
 *@s1: first string
 *@s2: second string
 *@n: number of bytes of s2
 *Return: pointer to concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1, len2;
	unsigned int i;

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
	if (n >= len2)
	{
		n = len2;
	}
	p = malloc(sizeof(char) * (n + len1 + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		p[len1 + i] = s2[i];
	}
	p[len1 + i] = '\0';
	return (p);
}
