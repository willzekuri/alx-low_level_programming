#include "main.h"

/**
*print_number - Function is used to print an integer
*@n: parameter to the function
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
