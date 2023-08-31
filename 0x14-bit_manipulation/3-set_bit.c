#include "main.h"

/**
 * set_bit - set bit value to 1,  at a given index
 * @n: pointer of an unsigned long int.
 * @index: the bit index
 *
 * Return: if it is successful  1, else -1 if not successful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (63 < index)
		return (-1);

	x = 1 << index;
	*n = (*n | x);

	return (1);
}
