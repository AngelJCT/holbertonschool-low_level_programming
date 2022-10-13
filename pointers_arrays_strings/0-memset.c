#include "main.h"
/**
 *_memset - fills memory with constant byte
 *@s: memory space
 *@b: byte to fill
 *@n: number of spaces to fill
 *Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
