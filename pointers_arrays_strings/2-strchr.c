#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: pointer to string
 *@c: letter to search
 *Return: letter c in a string
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x]; x++)
	{
		if (s[x] == c)
		{
			return (x);
		}
		else
		{
			return (0);
		}
	}
	return (s);
}
