#include "main.h"
/**
 *is_prime_number - check if a number is prime
 *@n: numbers
 *@c: variable
 *Return: return if numbers are prime or not
 */
int _prime(int c, int n);
int is_prime_number(int n)
{
	return (_prime(2, n));
}
/**
 *_prime - check if a number is prime
 *@n: numbers
 *@c: variable
 *Return: numbers prime or not
 */
int _prime(int c, int n)
{
	if (n == 0 || n == 1)
	{
		return (0);
	}
	else if (n == c)
	{
		return (1);
	}
	else if (n % c == 0)
	{
		return (0);
	}
	return (_prime(c + 1, n));
}
