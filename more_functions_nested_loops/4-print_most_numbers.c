#include "main.h"
/**
 * print_most_numbers - print numbers 0 to 9 except 2 and 4
 * Return: Always 0 success
 */
void print_most_numbers(void)
{
	int t;

	for (t = '0'; t <= '9'; t++)
	{
		if (t == '2' && t == '4')
		{
			return;
		}
		else
		{
			_putchar(t);
		}
	}
	_putchar('\n');
}
