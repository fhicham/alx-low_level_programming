#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: Refers to a string containing a binary number
 *
 * Return: An unsigned integer with a decimal value for binary, or 0 if false
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int numbers;

	numbers = NULL;
	if (!b)
		return (0);
	for (index = NULL; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	for (index = NULL; b[index] != '\0'; index++)
	{
		numbers <<= 1;
		if (b[index] == '1')
			numbers += 1;
	}
	return (numbers);
}
