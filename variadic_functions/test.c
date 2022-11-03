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

	va_start(ptr, n);
	str = va_arg(ptr, char *);
	printf("%s", str);
	printf("\n");
	str = va_arg(ptr, char *);
	printf("%s", str);
	printf("\n");
	va_end(ptr);
}
