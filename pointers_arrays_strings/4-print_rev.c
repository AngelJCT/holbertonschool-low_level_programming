#include "main.h"
/**
 *print_rev - print a string in reverse
 *@s: return a string in reverse
 *Return: Always 0 success
 */
void print_rev(char *s)
{
	int a, j, count = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		count++;
	}
	for (j = (count - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
