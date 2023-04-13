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
	unsigned int l = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		l++;

	hicham = malloc(sizeof(char) * (l + 1));

	if (hicham == NULL)
		return (NULL);

	l = 0;

	for (index = 0; s1[index]; index++)
		concat[l++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[l++] = s2[index];

	hicham[l] = '\0';

	return (hicham);
}
