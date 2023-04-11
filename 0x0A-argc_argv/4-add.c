#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: 1 if a non-integer is among the passed in arguments, 0 (Success)
 */

int main(int argc, char *argv[])
{
	int f, h, length, sum;
	char *ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		sum = 0;
		for (f = 1; f < argc; f++)
		{
			ptr = argv[f];
			length = strlen(ptr);

			for (h = 0; h < length; h++)
			{
				if (isdigit(*(ptr + h)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[f]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
