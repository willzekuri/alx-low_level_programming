#include <stdio.h>

/**
*main - Function to print the name of program
*@argc: stores the number of argument used to call the program
*@argv: array of characters that stores the argument used to call the program
*Return: always 0
*/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
