
#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: return 0 if big endian, else  1 if little endian
 */
int get_endianness(void)
{
	unsigned int y;
	char *a;

	y = 1;
	a = (char *) &y;

	return ((int)*a);
}

