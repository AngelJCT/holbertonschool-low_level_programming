#include "main.h"
/**
 *_strpbrk - search a string for any set of bytes
 *@s: bytes to be searched
 *@accept: original bytes
 *Return: s if matches any bytes, null if not
 */
char *_strpbrk(char *s, char *accept)
{
	int n, j, len;

	len = 0;

	for (n = 0; n < *s; n++)
	{
		for (j = 0; j < *accept; j++)
		{
			if (s[n] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		return (accept);
	}
	return (s);
}
