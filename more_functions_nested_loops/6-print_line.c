#include "main.h"
/**
 * print_line - print a straight line
 * @n: print a straight line
 * Return: Always 0 success
 */
void print_line(int n)
{

	while (n > 0)
	{
		_putchar('_');
		n++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
