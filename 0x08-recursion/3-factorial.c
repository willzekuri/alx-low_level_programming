#include "main.h"

/**
*factorial - function to return factorial of a given number
*@n: parameter of the function
*Return: int(return an integer value0
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
