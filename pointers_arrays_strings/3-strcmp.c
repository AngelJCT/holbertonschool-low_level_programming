#include "main.h"
/**
 *_strcmp - compare two strings
 *@s1: first string to be compared
 *@s2: second string to be compared
 *Return: Always 0 success
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0, t = 0;

	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
		{
			t = 1;

		}
		c++;
	}

	if (t == 0 && s1[c] == '\0' && s2[c] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
