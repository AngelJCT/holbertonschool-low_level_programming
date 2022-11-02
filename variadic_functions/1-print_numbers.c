#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers-print numbers
 *@separator: pointer to comma and space
 *@n: number of integers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arpt;

	if (separator == NULL)
	{
		return;
	}

	va_start(arpt, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arpt, int));
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arpt);
}
