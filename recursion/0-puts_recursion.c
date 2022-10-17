#include "main.h"
/**
 *_puts_recursion - print a string using recursion
 *@s: pointer to string
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
	}
	s++;
	_putchar('\n');
}
