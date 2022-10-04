#include "main.h"
/**
 * main - print alphabet in lowercase
 * Return: Always 0 success
 */
print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
