#include "main.h"
/**
 *print_rev - print a string in reverse
 *@s: return a string in reverse
 *Return: Always 0 success
 */
void print_rev(char *s)
{
	int a;
	char *begin, *end, temp;

	begin = s;
	end = s;

	for (a = 0; a < -1; a++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
	_putchar('\n');
}
