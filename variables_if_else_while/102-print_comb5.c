#include <stdio.h>
/**
 *main-entry point
 *Return: Always 0 success
 */
int main(void)
{
	int first, second, third, fourth;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = '0'; second <= '9'; second++)
		{
			for (third = '0'; third <= '9'; third++)
			{
				for (fourth = third + 1; fourth <= '9'; fourth++)
				{
					putchar(first);
					putchar(second);
					putchar(' ');
					putchar(third);
					putchar(fourth);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
