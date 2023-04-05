#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string
 *
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int h = 0;

	if (*s)
	{
		h++;
		h += _strlen_recursion(s + 1);
	}
	return (h);
}
