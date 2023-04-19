#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function to concatenate the arguments of the program
 *
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int a, b, r = 0, l = 0;
	char *args;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			l++;
		}
	}

	l += ac;

	args = malloc(sizeof(char) * l + 1);

	if (args == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			args[r] = av[a][b];
			r++;
		}

		if (args[r] == '\0')
		{
			args[r++] = '\n';
		}
	}

	return (args);
}
