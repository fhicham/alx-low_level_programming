#include <unistd.h>

/**
 * _putchar - Writes the c character to stdout
 * @c: Character to be printed
 *
 * Return: in success 1.
 * When an error occurs, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
