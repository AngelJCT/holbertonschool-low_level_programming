#include "main.h"
/**
 *puts2 - print characters of a string
 *@str: return characters of a string startin from 0
 *Return: Always 0 success
 */
void puts2(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(x);
		}
		x++;
	}
	_putchar('\n');
}
