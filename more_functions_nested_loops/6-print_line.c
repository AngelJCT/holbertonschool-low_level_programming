#include "main.h"
/**
 * print_line - print a straight line
 * @n: print a straight line
 * Return: Always 0 success
 */
void print_line(int n)
{
	int J;

	for (J = 0; n <= J; J++)
	{
		_putchar('_');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
