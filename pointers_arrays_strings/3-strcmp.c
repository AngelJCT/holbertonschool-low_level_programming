#include "main.h"
/**
 *_strcmp - compare two strings
 *@s1: first string to be compared
 *@s2: second string to be compared
 *Return: Always 0 success
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
	}
	else if ((*s1 == '\0' && *s2 != '\0')
		|| (*s1 != '\0' *s2 == '\0')
			|| *s1 != *s2)
	{
		c = 1;
		return (1);
	}
	if (c == 0)
	{
		return (0);
	}
}
