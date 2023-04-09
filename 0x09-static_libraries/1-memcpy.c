#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		dest[h] = src[h];
	}
	return (dest);
}
