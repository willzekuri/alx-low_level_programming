#include <stdio.h>

/**
*main - Function to print the name of program
*@argc: stores the number of argument used to call the program
*@argv: array of characters that stores the argument used to call the program
*Return: always 0
*/

int main(int argc, char *argv[])
{
	int a;
	(void)argc;

	for (a = 0; argv[a]; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
