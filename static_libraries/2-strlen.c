#include "main.h"
/**
 *_strlen - print the lenght of a string
 *@s: return the lenght of a string
 *Return: Always 0 success
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
