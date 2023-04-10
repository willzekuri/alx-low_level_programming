#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function that adds positive numbers
 *
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int a, b, sum = 0;
	char *str;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; argv[a]; a++)
	{
		b = strtol(argv[a], &str, 10);

		if (*str)
		{
			printf("Error\n");
			return (1);
		}

		else
		{
			sum += b;
		}
	}

	printf("%d\n", sum);

	return (0);
}
