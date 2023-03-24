#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints an integer.
  * @n: The integer to prints.
  *
  * Return: Nothing!
  */

void print_number(int n)
{
	unsigned int u = n;

	if (n < 0)
	{
		n *= -1;
		u = n;
		_putchar('-');
	}

	u /= 10;

	if (u != 0)
		print_number(u);

	_putchar((unsigned int) u % 10 + '0');

}
