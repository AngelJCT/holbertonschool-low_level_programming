#include "main.h"
/**
 * jack_bauer - print the minutes of the day
 * Return: Always 0 success
 */
void jack_bauer(void)
{
	int y;
	int z;
	int a;
	int c;

	for (y = 0; y <= 2; y++)
	{
		_putchar(y);
	}
	for (z = 0; z <= 3; z++)
	{
		_putchar(z);
	}
	_putchar(':');

	for (a = 0; a <= 5; a++)
	{
		_putchar(a);
	}
	for (c = 0; c <= 9; c++)
	{
		_putchar(c);
	}
}
