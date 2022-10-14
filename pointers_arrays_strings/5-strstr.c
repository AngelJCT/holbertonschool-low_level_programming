#include "main.h"
/**
 *_strstr - function to locate a substring
 *@haystack: string
 *@needle: substring
 *Return: pointer to the beginning of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int n, j;

	j = 0;

	while (haystack[j] != '\0')
	{
		for (n = 0; needle[n]; n++)
		{
			if (needle[n] == haystack[n])
			{
				return (needle);
			}
		}

	}
	return (0);
}
