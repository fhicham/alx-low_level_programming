#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: input
 * @c: input
 *
 * Return: Always 0 (Success)
 * If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
