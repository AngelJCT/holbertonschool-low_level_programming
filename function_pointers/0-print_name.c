#include "function_pointers.h"
/**
 *print_name-prints a name
 *@name: pointer to name
 *@f: function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	void (*fp)(char *);

	fp = f;

	(*fp)(name);
}
