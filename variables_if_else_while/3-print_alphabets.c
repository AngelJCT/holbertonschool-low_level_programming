#include <stdio.h>
/**
 * main - print alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar ('\n');
		return (0);
}
