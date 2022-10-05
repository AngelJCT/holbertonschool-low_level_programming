#include "main.h"
/**
 * jack_bauer - print the minutes of the day
 * Return: Always 0 success
 */
void jack_bauer(void)
{
	int y;
	int z;

	for (y = 00; y <= 23; y++)
	{
		_putchar(':');
		_putchar(y);

		for (z = 00; z <= 59; z++)
			_putchar(z);
	}
}
