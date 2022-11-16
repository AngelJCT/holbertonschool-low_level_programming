#include "main.h"
/**
 *flip_bits-function to get the numbers of bits neede to flip
 *@n: bit value
 *@m: bit value
 *Return: count of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0, t1, t2;

	while (n > 0 || m > 0)
	{
		t1 = (n & 1);
		t2 = (m & 1);

		if (t1 != t2)
		{
			flips++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (flips);
}
