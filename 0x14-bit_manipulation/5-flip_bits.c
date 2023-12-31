#include "main.h"

/**
 * flip_bits - returns the number of bits you need to turn over to get from one number to another
 * @n: first number
 * @m: second number 
 *
 * Return: return number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int turn;

	for (turn = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			turn++;
	}

	return (turn);
}
