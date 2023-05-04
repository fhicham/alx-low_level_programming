#include "main.h"

/**
 * print_binary - Print the binary equivalent of a decimal number
 * @n: Printable number in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
