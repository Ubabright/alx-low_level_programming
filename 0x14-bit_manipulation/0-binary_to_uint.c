#include "main.h"

/**
 * binary_to_uint - changes a binary number into an unsigned int
 * @b: binary
 *
 * Return: unsigned int should be returned
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int utd;
	int sen, unit;

	if (!b)
		return (0);

	utd = 0;

	for (sen = 0; b[sen] != '\0'; sen++);

	for (sen--, unit = 1; sen >= 0; sen--, unit *= 2)
	{
		if (b[sen] != '0' && b[sen] != '1')
		{
			return (0);
		}

		if (b[sen] & 1)
		{
			utd += unit;
		}
	}

	return (utd);
}
