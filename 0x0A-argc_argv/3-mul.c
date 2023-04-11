#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: Array of arguments
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int a, h;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		h = 1;

		for (a = 1; a < 3; a++)
		h *= atoi(argv[a]);

		printf("%d\n", h);
	}

	return (0);
}
