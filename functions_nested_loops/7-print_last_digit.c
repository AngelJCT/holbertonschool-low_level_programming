#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: get the last digit
 * Return: Always 0 success
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (a < 0)
	{
		a = a * (-1);
	}
	_putchar('0' + a);
	return (0);
}
