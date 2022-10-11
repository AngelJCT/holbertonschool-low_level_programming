#include "main.h"
/**
 *_strncat - concatenate two string
 *@dest: destination string
 *@src: string
 *@n: number of bytes
 *Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x++] != '\0')
	{
		x++;
	}

	for (y = 0; src[y] && y < n; y++)
	{
		dest[x++] = src[y];
	}
	return (dest);
}
