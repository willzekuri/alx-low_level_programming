#include "main.h"
/**
 *times_table - prints 9 times table starting from 0
 * @void: no parameters
 *
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			_putchar((c) + '0');
			_putchar(',');
			_putchar(' ');
		}
	_putchar('\n');
	}

}
