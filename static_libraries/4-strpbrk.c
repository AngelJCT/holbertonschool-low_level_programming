#include "main.h"
/**
 *_strpbrk - search a string for any set of bytes
 *@s: bytes to be searched
 *@accept: original bytes
 *Return: s if matches any bytes, null if not
 */
char *_strpbrk(char *s, char *accept)
{
	int n, j;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[n] == accept[j])
			{
				return (s + n);
			}
		}
	}
	return (0);
}
