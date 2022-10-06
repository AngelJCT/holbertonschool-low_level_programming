#include "main.h"
/**
 * print_numbers - print 0 to 9
 *
 * Return: Always 0 success
 */
void print_numbers(void)
{
	int exe;

	for (exe = '0'; exe <= '9'; exe++)
	{
		_putchar(exe);
	}
	_putchar('\n');
}
