#include "main.h"
/**
 *_strcmp - compare two strings
 *@s1: first string to be compared
 *@s2: second string to be compared
 *Return: difference of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (s1[c] && s2[c] && s1[c] == s2[c])
	{
		c++;
	}
	return (s1[c] - s2[c]);
}
