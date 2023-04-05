#include "main.h"

/**
 * check - checks for the square root
 * @f:fakir
 * @h:hicham
 *
 * Return: the resulting square root
 */
int check(int f, int h)
{
	if (f * f == h)
		return (f);
	if (f * f > h)
		return (-1);
	return (check(f + 1, h));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	return (0);
	return (check(1, n));
}
