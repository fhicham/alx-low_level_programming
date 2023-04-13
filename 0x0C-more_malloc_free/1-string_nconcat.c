#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates n bytes of a string to another string
 * @s1: String to append to
 * @s2: String to concatenate from
 * @n: Number of bytes from s2 to concatenate to s1
 * Return: Pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *hicham;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	hicham = malloc(sizeof(char) * (len + 1));

	if (hicham == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		hicham[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		hicham[len++] = s2[index];

	hicham[len] = '\0';

	return (hicham);
}
