#include "main.h"
/**
 *puts_half - print half of a string
 *@str: print half of a string
 *Return: Always 0 success
 */
void puts_half(char *str)
{
	int l, e, o;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		for (e = l / 2; str[e] != '\0'; e++)
		{
			_putchar(str[e]);
		}
	}
	else
	{
		for (o = (l - 1) / 2; o < l - 1; o++)
		{
			_putchar(str[o + 1]);
		}
	}
	_putchar('\n');
}
