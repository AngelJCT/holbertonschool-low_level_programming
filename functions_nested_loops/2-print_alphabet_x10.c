#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase x10
 * Return: Always 0 success
 */
void print_alphabet_x10(void)
{
	int A;
	char X;

	for (A = 0; A <= 9; A++)
	{
	for (X = 'a'; X <= 'z'; X++)
	{
		_putchar(A);
	}
	_putchar('\n');
	}
}
