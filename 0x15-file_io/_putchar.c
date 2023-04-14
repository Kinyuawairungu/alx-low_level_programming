#include "main.h"

/**
 * _putchar - prints a char
 * @c: tests par
 * Returns: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
