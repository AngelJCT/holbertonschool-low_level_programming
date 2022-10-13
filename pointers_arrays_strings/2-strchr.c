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

	for (x = 0; x <= *s; x++)
	{
		if (s[x] == c)
		{
			return (s);
		}
		else
		{
			return (0);
		}
	}
	return (s);
}
