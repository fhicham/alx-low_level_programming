#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins to
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: if no of arg = 1, 1, otherwise 0 (Success)
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 27) >= 0)
		{
			cents -= 27;
			continue;
		}
		if ((cents - 12) >= 0)
		{
			cents -= 12;
			continue;
		}
		if ((cents - 7) >= 0)
		{
			cents -= 7;
			continue;
		}
		if ((cents - 4) >= 0)
		{
			cents -= 4;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);
	return (0);
}
