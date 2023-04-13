#include "main.h"

/**
 * _print - Moves a string's location to the left and prints the string.
 * @str: string to move.
 * @h: size of string.
 * Return: char
 */
void _print(char *str, int h)
{
	int f, a;

	f = a = 0;
	while (f < h)
	{
		if (str[f] != '0')
			a = 1;
		if (a || f == h - 1)
			_putchar(str[f]);
		f++;
	}

	_putchar('\n');
	free(str);
}

/**
 * check_for_digits - Verify that they are numbers
 * @ab: pointer to arguments.
 *
 * Return: 0 if digits, 1 if not.
 */
int check_for_digits(char **ab)
{
	int h, k;

	for (h = 1; h < 3; h++)
	{
		for (k = 0; av[h][k]; k++)
		{
			if (av[h][k] < '0' || av[h][k] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int h, a, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (h = num_index, a = dest_index; h >= 0; h--, a--)
	{
		mul = (n - '0') * (num[h] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[a] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[a] = add % 10 + '0';
	}
	for (addrem += mulrem; a >= 0 && addrem; a--)
	{
		add = (dest[a] - '0') + addrem;
		addrem = add / 10;
		dest[a] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * init - initializes a string
 * @str: sting to initialize
 * @m: length of strinf
 *
 * Return: void
 */
void init(char *str, int m)
{
	int h;

	for (h = 0; h < m; h++)
		str[h] = '0';
	str[h] = '\0';
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero, or exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, tj, j;
	char *f;
	char *h;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (tj = 0; e[tj]; tj++)
			_putchar(e[tj]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	f = malloc(ln * sizeof(char));
	if (f == NULL)
	{
		for (tj = 0; e[tj]; tj++)
			_putchar(e[tj]);
		exit(98);
	}
	init(f, ln - 1);
	for (tj = l2 - 1, j = 0; tj >= 0; tj--, j++)
	{
		h = mul(argv[2][tj], argv[1], l1 - 1, f, (ln - 2) - j);
		if (h == NULL)
		{
			for (tj = 0; e[tj]; tj++)
				_putchar(e[tj]);
			free(f);
			exit(98);
		}
	}
	_print(f, ln - 1);
	return (0);
}
