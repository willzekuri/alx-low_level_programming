#include "main.h"

/*prototype for natural function*/
int squareroot(int n, int a);

/**
*_sqrt_recursion - Function to return the natural squareroot of a number
*@n: parameter of the function
*Return: integer value - the natural squareroot
*
*/

int _sqrt_recursion(int n)
{
	return (squareroot(n, 1));
}

/**
*squareroot - calculates natural squareroot
*@n: number to check for square root
*@a: iterate number
*
*Return: the natural squareroot
*/

int squareroot(int n, int a)
{
	int res;

	res = a * a;

	if (res > n)
		return (-1);
	if (res == n)
		return (a);

	return (squareroot(n, a + 1));
}
