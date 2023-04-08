#include "main.h"

/**
 * set_bit - sets a bit at given index
 *
 * Description: A function that sets the
 * value of a bit
 *
 * @n: the range
 * @index: the index
 * Return: status code 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0 || index > 63)
		return (-1);

	*n = (*n | (1 << index));

	return (1);
}
