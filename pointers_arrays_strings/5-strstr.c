#include "main.h"
/**
 *_strstr - function to locate a substring
 *@haystack: string
 *@needle: substring
 *Return: pointer to the beginning of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int n;

	while (haystack)
	{
		for (n = 0; needle[n]; n++)
		{
			if (haystack[n] == needle[n])
			{
				return (needle);
				needle++;
			}
		}
	}
	return (0);
}
