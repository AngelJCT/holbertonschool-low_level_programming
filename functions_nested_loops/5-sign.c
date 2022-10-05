#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: get the sign of a number
 * Return: Always 0 success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('\n');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('\n');
	}
	else
	{
		return (-1);
	}
}
