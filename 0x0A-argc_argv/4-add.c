#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - adds multiple numbers
*@argc: Argument counter
*@argv: Argument vector
*Return: always 0
*/

int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; argv[a]; a++)
	{

		sum += atoi(argv[a]); 

	}
	printf("%d\n", sum);

	for (b = 0; argv[b]; b++)
	{
		if (atoi(argv[b]) > 65)
		{
			printf("Error\n");
			return (1);
		}
	}

	return (0);
	
	
}
