#include "main.h"
/**
 *_strstr - function to locate a substring
 *@haystack: string
 *@needle: substring
 *Return: pointer to the beginning of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int n, j, l;

	l = 0;

	if (*haystack != '\0')
	{
		for (n = 0; haystack[n] != '\0'; n++)
		{
			for ( ; needle[j] != '\0'; j++)
			{
				if (haystack[n] == needle[j])
				{
					l++;
				}
			}
		}
		if (needle[j] == '\0')
		{
			return (needle);
		}
	}

	return (0);
}
