#include "main.h"
/**
 * _strlen_recursion - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * pal_checker - check if s is palindrome.
 * @s: string base address.
 * @f: left index.
 * @h: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pal_checker(char *s, int f, int h)
{
	if (s[f] == s[h])
		if (f > h / 2)
			return (1);
		else
			return (pal_checker(s, f + 1, h - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
