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
	while (dest[x])
	{
		x++;
	}
	y = 0;
	while (y < n && src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	if (y < n)
	{
		dest[x] = src[y];
	}
	return (dest);
}
