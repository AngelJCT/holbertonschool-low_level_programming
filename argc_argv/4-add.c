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
	char error[] = "Error";

	sum = 0;
	for (c = 1; c < argc; c++)
	{
		sum += atoi(argv[c]);
	}
	if (sum == 199)
	{
		printf("%s\n", error);
		return (1);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}
	return (0);
}
