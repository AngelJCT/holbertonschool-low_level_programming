#include "main.h"
/**
 *_strspn - print the length of a prefix substring
 *@s: number of bytes in initial segment
 *@accept: original bytes
 *Return: number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int n, j, len;

	len = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[n] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		return (len);
	}
	return (len);
}
