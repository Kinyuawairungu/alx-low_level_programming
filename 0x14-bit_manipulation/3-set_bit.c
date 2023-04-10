#include "main.h"

/**
 * set_bit - sets the value of bit to 1 at a specific position
 * @index: position
 * @n: pointer used to test par
 * Return: - 1 0r 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int buffer;


	if (index >= sizeof(unsigned long int) * 8)

		return (-1);

	buffer = 1UL << index;

	*n |= buffer;

	return (1);
}
