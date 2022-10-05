#include "main.h"
/**
 * jack_bauer - print the minutes of the day
 * Return: Always 0 success
 */
void jack_bauer(void)
{
	int y;
	int c;

	for (y = '0'; y <= '23'; y++)
	{
		for (c = '0'; c <= '59'; c++)
		{
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar(':');
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			_putchar('\n');
		}
	}
}
