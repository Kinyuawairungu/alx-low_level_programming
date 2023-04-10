#include "main.h"

/**
 * flip_bits - finds number required to effect a flip
 * @n: tests par 1
 * @m: tests par 2
 * Returns: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	unsigned long int j = n ^ m;

	while (j != 0)
	{
		if (j & 1)
			count++;
		j >>= 1;
	}

	return (count);
}
