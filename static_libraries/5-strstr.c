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

	if (needle[0] == '\0')
		return (haystack);

	for (n = 0; haystack[n] != '\0'; n++)
	{
		if (haystack[n] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[n + j] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
				return (haystack + n);
		}
	}
	return ('\0');
}
