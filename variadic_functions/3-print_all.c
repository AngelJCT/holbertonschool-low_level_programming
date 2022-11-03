#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_all-function that prints anything in string
 *@format: string with given types of arguments
 */
void print_all(const char * const format, ...)
{
	int j = 0, i = 0;
	char *str = NULL;
	va_list p;

	va_start(p, format);
	while (format && format[j])
		j++;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(p, int));
				break;
			case 'i':
				printf("%d", va_arg(p, int));
				break;
			case 'f':
				printf("%f", va_arg(p, double));
				break;
			case 's':
				str = va_arg(p, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (i != j - 1)
			(printf(", ");
			i++;
	}
	printf("\n");
	va_end(p);
}
