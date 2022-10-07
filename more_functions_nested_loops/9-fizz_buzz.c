#include "main.h"
#include <stdio.h>
/**
 * main - print numbers 1 to 100
 *
 * Return: Always 0 success
 */
int main(void)
{
	int dig;

	for (dig = 1; dig <= 100; dig++)
	{
		if (dig % 3 == 0 && dig % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (dig % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (dig % 5 == 0)
		{
			if (dig != 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
		{
			printf("%i ", dig);
		}
	}
	printf("\n");
	return (0);
}
