#include <stdio.h>
/**
 * main - print all number from base 10 with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
