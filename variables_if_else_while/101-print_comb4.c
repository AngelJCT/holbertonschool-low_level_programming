#include <stdio.h>
/**
 *main-entry point
 *Return: Always 0 success
 */
int main(void)
{
	int firstDigit, secondDigit, thirdDigit;

	for (firstDigit = '0'; firstDigit <= '9'; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit <= '9'; secondDigit++)
		{
			for (thirdDigit = secondDigit + 1; thirdDigit <= '9'; thirdDigit++)
			{
				putchar(firstDigit);
				putchar(secondDigit);
				putchar(thirdDigit);
				if (firstDigit == '7' && secondDigit == '8' && thirdDigit == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
