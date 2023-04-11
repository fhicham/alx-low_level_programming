#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives
 * @argc: Number of arguments
 * @argv: Array array of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int h;

	for (h = 0; h < argc; h++)
	printf("%s\n", argv[h]);

	return (0);
}
