#include <stdio.h>
/**
 * main - print all number from base 10 with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int one;

	for (one = 0; one <= 9; one++)
	{
		putchar(one);
	}
	putchar('\n');
	return (0);
}
