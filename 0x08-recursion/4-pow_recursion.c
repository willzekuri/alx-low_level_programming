#include "main.h"

/**
*_pow_recursion - function to print the power of a number
*@x: first parameter - the number to be raised to the power of y
*@y: second parameter 
*Return: int
*/

int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	else if (y >= 0)
	{
		res = x * _pow_recursion(x, y - 1);
	}
	return (res);
	
}
