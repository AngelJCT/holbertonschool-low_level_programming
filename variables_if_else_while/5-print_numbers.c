#include <stdio.h>
/**
 * main - print numbers from base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
