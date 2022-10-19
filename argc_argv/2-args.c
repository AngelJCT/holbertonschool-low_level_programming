#include <stdio.h>
/**
 *main - print all arguments
 *@argc: arguments count
 *@argv: arguments array
 *Return: return all arguments
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
