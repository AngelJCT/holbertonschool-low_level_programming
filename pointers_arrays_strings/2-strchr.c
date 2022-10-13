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
	while (x < s)
	{
		if (c == s[x])
		{
			return (s[x]);
		}
		x++;
		else
		{
			return ('\0');
		}
	}
	return (s);
}
