#include <stdio.h>
#include <stdlib.h>
/**
 *main - adds positive numbers
 *@argc: argument count
 *@argv: array of arguments
 *Return: sum of positive numbers
 */
int main(int argc, char *argv[])
{
	int sum, c;

	sum = 0;
	for (c = 1; c < argc; c++)
	{
		sum += atoi(argv[c]);
	}
	printf("%d\n", sum);
	return (0);
}
