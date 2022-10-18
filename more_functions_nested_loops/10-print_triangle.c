#include "main.h"
/**
 *print_triangle - print triangle
 *@size: size of triangle
 *
 *
 */
void print_triangle(int size)
{
	int r, sp, s2, bc;

	s2 = size;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
		for (r = 0; r < size; r++)
		{
			for (sp = 1; sp < s2; sp++)
			{
				_putchar(' ');
			}
			if (r < size)
			{
				s2--;
			}
			for (bc = 0; bc <= r; bc++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
