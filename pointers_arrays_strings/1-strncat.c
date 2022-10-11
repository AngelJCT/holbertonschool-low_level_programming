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

	for (x = 0; src[x] && x < n; x++)
	{
		dest[y++] = src[x];
	}
	return (dest);
}
