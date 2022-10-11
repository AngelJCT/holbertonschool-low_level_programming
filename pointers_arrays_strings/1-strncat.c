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
	while (dest[x++])
	{
		y++;
	}

	for (y = 0; src[y] && x < n; x++)
	{
		dest[x++] = src[y];
	}
	return (dest);
}
