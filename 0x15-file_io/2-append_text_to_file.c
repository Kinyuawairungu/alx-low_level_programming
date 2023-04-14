#include "main.h"


/**
 *get_bit - returns bit at a specific index
 *@n: tests par
 *@index: gives position
 *Return: bit at position n
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int buffer;

	if (index >= sizeof(unsigned long int) * 8)

		return (-1);

	buffer = 1UL << index;
	return ((n & buffer) ? 1 : 0);
}
