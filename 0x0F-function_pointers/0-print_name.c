#include "function_pointers.h"

/**
 * print_name - print name using pointer to function.
 * @name: The name to be added.
 * @f: Pointer to work Prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
