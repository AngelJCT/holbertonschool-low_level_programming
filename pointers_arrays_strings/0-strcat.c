#include "main.h"
#include <stdio.h>
/**
 *_strcat - concatenate two string
 *@dest: destination
 *@src: string
 *Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (src[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (dest[b] != '\0')
	{
		src[a] = dest[b];
		a++;
		b++;
	}
	src[a] = '\0';
	printf("%s", src);
	return (dest);
}
