#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: pointer to string
 *@c: letter to search
 *Return: letter c in a string
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	}while (*s++);
	return (0);
}
