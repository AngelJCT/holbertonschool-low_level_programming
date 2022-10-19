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
	int a, sum, x;
	char error[] = "Error";

	sum = 1;
	for (a = 2; a < argc; a++)
	{
		x = strtol(argv[a], '\0', 10);
		sum = sum + x;
		printf("%d\n", sum);
	}

	if (sum == a)
	{
		printf("%s\n", error);
		return (1);
	}
	return (0);
}
