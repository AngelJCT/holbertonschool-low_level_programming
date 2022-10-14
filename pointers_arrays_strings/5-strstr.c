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

	if (*haystack != '\0')
	{
		for (j = 0; haystack[j]; j++)
		{
			for (n = 0; needle[n]; n++)
			{
				if (needle[n] == haystack[j])
				{
					return (needle);
				}
			}
		}
	}
	if (needle[n] != haystack[j])
	{
		return (0);
	}
	return (0);
}
