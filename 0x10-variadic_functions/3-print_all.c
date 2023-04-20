#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Nothing prints.
 * @format: List of argument types passed to the work.
 */
void print_all(const char * const format, ...)
{
	int in = 0;
	char *str, *separator = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[in])
		{
			switch (format[in])
			{
				case 'c':
					printf("%s%c", separator, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(l, float));
					break;
				case 's':
					str = va_arg(l, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					in++;
					continue;
			}
			separator = ", ";
			in++;
		}
	}
	printf("\n");
	va_end(l);
}
