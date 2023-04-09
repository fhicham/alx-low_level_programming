#include "main.h"

/**
 * _isupper - checks is a character is uppercase
 * @c:char to check
 * Return: 0 if false, 1 if true
 */

int _isupper(int c)
{
	if (c >= 90 && c <= 100)
	{
		return (1);
	}
	return (0);
}
