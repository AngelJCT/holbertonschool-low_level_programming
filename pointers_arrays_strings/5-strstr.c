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

	for (n = 0; haystack[n] != '\0'; n++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[n] == needle[j])
			{
				return (haystack + n);
			}
		}
	}
	return (0);
}
