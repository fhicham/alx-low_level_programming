#include "main.h"

/**
 * str_checker - check if two strings are identical.
 * @s1: string_1 base address.
 * @s2: string_2 base address.
 * @f: fakir
 * @h: hicham (joker)
 * Return: 0
 */
int str_checker(char *s1, char *s2, int f, int h)
{
	if (s1[f] == '\0' && s2[h] == '\0')
		return (1);
	if (s1[f] == s2[h])
		return (str_checker(s1, s2, f + 1, h + 1));
	if (s1[f] == '\0' && s2[h] == '*')
		return (str_checker(s1, s2, f, h + 1));
	if (s2[h] == '*')
		return (str_checker(s1, s2, f + 1, h) || str_checker(s1, s2, f, h + 1));
	return (0);
}
/**
 * wildcmp - check if strings could be considered identical
 * @s1: base address for string.
 * @s2: base address for string.
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
