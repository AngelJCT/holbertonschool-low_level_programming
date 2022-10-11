#include "main.h"
/**
 *_strncpy - copy a string
 *@dest: destination
 *@src: string to be copied
 *@n: number of bytes
 *Return: destination of string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int v;

	v = 0;
	while (v < n && src[v])
	{
		dest[v] = src[v];
		v++;
	}
	while (v < n)
	{
		dest[v] = '\0';
		v++;
	}
	return (dest);
}
