#include <stdlib.h>
#include "main.h"

/**
 * argstostr - main entry
 * @av: double pointer array
 * @ac: int
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int j, h, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (h = 0; av[j][h]; h++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (j = 0; j < ac; j++)
	{
		for (h = 0; av[j][h]; h++)
			str[index++] = av[j][h];

		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
