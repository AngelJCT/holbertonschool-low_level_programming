#include <stdio.h>
/**
 *main-entry point
 *Return: Always 0 success
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (j != '9' || i != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
