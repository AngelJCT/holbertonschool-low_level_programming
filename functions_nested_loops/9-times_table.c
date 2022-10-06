#include "main.h"
/**
 * times_table - prints 9 times table
 * Return: 9 times table
 */
void times_table(void)
{
	int a, b, c, hex, dec;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			hex = ((c / 10) + '0');
			dec = ((c % 10) + '0');

		if (c <= 9 && b != 0)
		{
			_putchar(' ');
		}
		else
		{
			_putchar(hex);
		}
		if (b != 0)
		{
			_putchar(dec);
		}
		if (b <= 8)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
		_putchar('\n');
	}
}
