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
		for (second = first + 1; second <= '9'; second++)
		{
			putchar(first);
			putchar(second);
			putchar(' ');
			for (third = second + 1; third <= '9'; third++)
			{
				for (fourth = third + 1; fourth <= '9'; fourth++)
				{
					putchar(third);
					putchar(fourth);
					if (first == '9' && second == '8' && third == '9' && fourth == '9')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
