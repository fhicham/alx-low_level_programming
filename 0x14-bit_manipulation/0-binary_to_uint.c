#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: Refers to a string containing a binary number
 *
 * Return: An unsigned integer with a decimal value for binary, or 0 if false
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	numbers = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
