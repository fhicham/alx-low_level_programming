#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int f = -1;

	do {
		f++;
		dest[f] = src[f];
	} while (src[f] != '\0');

	return (dest);
}
