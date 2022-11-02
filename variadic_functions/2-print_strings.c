#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 *
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ptr;

	if (separator == NULL)
	{}

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		printf("%s", str);
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
