#include <stdio.h>
/**
 * main - print hexadecimal numbers in lowercase
 * Return: Always 0 success
 */
int main(void)
{
	int hex;

	for (hex = '0'; hex <= '9'; hex++)
	{
		putchar(hex);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
