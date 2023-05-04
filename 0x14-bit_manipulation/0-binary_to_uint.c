#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int h;
	unsigned int f;

	f = 0;
	if (!b)
		return (0);
	for (h = 0; b[h] != '\0'; h++)
	{
		if (b[h] != '0' && b[h] != '1')
			return (0);
	}
	for (h = 0; b[h] != '\0'; h++)
	{
		f <<= 1;
		if (b[h] == '1')
			f += 1;
	}
	return (f);
}
