#include "main.h"
/**
 * more_numbers - print numbers 0 to 14
 *
 * Return: Always 0 success
 */
void more_numbers(void)
{
	int A;
	int J;

	for (A = 0; A <= 9; A++)
	{
		for (J = 0; J <= 14; J++)
		{
			_putchar((J / 10) + '0');
			_putchar(J % 10) + '0');
		}
		_putchar('\n');
	}
}
