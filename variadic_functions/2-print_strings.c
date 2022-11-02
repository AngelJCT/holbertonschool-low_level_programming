#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 *print_strings-print a number of strings
 *@separator: pointer to comma and space
 *@n: number of strings
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
		if (str[4] == '\0')
		{
			printf("(nil)");
		}
	}
	printf("\n");
	va_end(ptr);
}
