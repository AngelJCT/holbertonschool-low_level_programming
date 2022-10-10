#include "main.h"
/**
 *print_rev - print a string in reverse
 *@s: return a string in reverse
 *Return: Always 0 success
 */
void print_rev(char *s)
{
	int a, l;
	char *begin_ptr, *end_ptr, temp;

	l = _strlen(s);
	begin_ptr = s;
	end_ptr = s;

	for (a = 0; a < l - 1; a++)
	{
		end_ptr++;
	}
	for (a = 0; a < l / 2; a++)
	{
		temp = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = temp;
		begin_ptr++;
		end_ptr--;
	}
	_putchar('\n');
}
