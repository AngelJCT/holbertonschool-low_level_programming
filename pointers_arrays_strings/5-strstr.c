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

	n = 0;

	while (haystack[n] != '\0')
	{
		if (haystack[n] == needle[0])
		{
		j = 1;
		while ((needle[j] != '\0' && haystack[n + j] != '\0') || needle[j] == haystack[j + n])
		{
			j++;
		}
		}
	}
	return (0);
}
