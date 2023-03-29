#include "main.h"

/**
*swap_int - function to swap the values of two integers
*@a: pointer parameter
*@b: second pointer parameter
*return: always 0(success)
*/

void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}
