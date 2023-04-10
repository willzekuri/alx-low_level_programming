#include <stdio.h>
#include <stdlib.h>

/**
*multiply - Function to multiply two numbers
*@a: parameter 1
*@b: second parameter
*Return: result of both parameters multiplied
*/
int multiply(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}
/**
*main - multiplies 2 numbers
*@argc: Argument counter
*@argv: Argument vector
*Return: always 0
*/

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%d\n", multiply(x, y));
	}
	return (0);
}
