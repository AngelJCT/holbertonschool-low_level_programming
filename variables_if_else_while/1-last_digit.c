#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - print the last digit of n
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("Last digit of %i is %i and is 0\n");
	}
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n");

	return (0);
}
