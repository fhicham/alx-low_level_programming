#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments that have been provided to the program.
 * @argv: A collection of pointers to arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int bytes, in;
	int (*a)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (in = 0; in < bytes; in++)
	{
		opcode = *(unsigned char *)a;
		printf("%.2x", opcode);

		if (in == bytes - 1)
			continue;
		printf(" ");

		a++;
	}

	printf("\n");

	return (0);
}
