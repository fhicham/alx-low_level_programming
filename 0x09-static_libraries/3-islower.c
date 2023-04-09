#include "main.h"

/**
 * _islower - checks for lowercase character
 * Description: checks is a character is lowercase
 * @c: the character to check
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
int r = 'a';

for (r = 'a'; r <= 'z'; r++)
{
/* refer int c*/
if (c == r)
{
return (1);
}
}
return (0);
}
