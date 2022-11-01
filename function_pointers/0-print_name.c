#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name-prints a name
 *@name: pointer to name
 *@f: function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}

	else
	{
		void (*fp)(char *);

		fp = f;

		(*fp)(name);
	}
}
