#include "main.h"
/**
 *_memcpy - copy memory to destination
 *@dest: destination
 *@src: memory to copy
 *@n: number of bytes
 *Return: destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	while (b < n && src[b])
	{
		src[b] = dest[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}

