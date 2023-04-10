#include "main.h"

/**
 * clear_bit - sets the value to 0 at a specific position
 * @n: tests par
 * @index: position
 * Will Return: 1 0r -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int buffer;

	if (index >= sizeof(unsigned long int) * 8)

		return (-1);

	buffer = ~(1UL << index);

	*n &= buffer;
	return (1);
}
