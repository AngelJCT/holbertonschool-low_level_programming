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

	for (a = 0; src[a] != '\0'; a++)

	for (b = 0; dest[b] != '\0'; b++, a++)
	{
		src[a] = dest[b];
	}
	src[a] = '\0';
	printf("%s", dest);
	return (dest);
}
