#include "main.h"
/**
 *_puts - print a string with new line
 *@str: return a string
 *Return: Always 0 success
 */
void _puts(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_puts(str);
}
