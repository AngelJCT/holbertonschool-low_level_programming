#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ac;

	for (ac = 'z'; ac >= 'a'; --ac)
	{
		putchar(ac);
	}
	putchar('\n');
	return (0);
}
