#include "main.h"
/**
 *_strcat - concatenate a two string
 *@dest: destination
 *@src: string
 *Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	while (dest[b] != '\0')
	{
		src[a] = dest[b];
		a++;
		b++;
	}
	src[a] = '\0';
	return (dest);
}
