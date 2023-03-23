#include "main.h"
/**
*print_line - ussed to print diagonal line
*@n: the parameter and argument of function
*Return: void
*/
void print_line(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');

			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
