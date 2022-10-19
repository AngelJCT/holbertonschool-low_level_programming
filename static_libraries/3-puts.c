#include "main.h"
/**
 *_puts - print a string with new line
 *@str: return a string
 *Return: Always 0 success
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
