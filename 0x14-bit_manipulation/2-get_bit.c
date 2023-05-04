#include "main.h"

/**
 * get_bit - Get a bit value at a specific index.
 * @n: widget.
 * @index: index to get the value at - indices start at 0.
 * Return: If an error occurs - -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

