#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - prints any number to 98
 * @n: parameter
 *
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		printf("%i, ", n);
		n--;
	}
	while (n <= 98)
	{
		if (n != 98)
		{
			printf("%i, ", n);
		}
		else
			printf("%i", n);
		n++;
	}
}
