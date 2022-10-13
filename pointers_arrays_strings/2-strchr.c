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

	x = 0;

	if (s[x])
	{
		if (s[x] == c)
		{
			return (s);
			x++;
		}
		if (s[x] == 0)
		{
			return (0);
		}
	}
	return (s);
}
