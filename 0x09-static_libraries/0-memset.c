#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 *		pointed to by @s with the constant byte @c
 * @s: A pointer to the memory address to be filled
 * @b: The character to fill the memory area with
 * @n: number of bytes to be changed
 *
 * Return: A pointer to the filled memory area @h.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
