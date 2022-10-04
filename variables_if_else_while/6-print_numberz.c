#include <stdio.h>
/**
 * main - print all number from base 10 with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
