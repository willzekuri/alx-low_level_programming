#include "main.h"
/**
 *print_times_table - prints any times table passed as argument
 * @n: parameters
 *
 */
void print_times_table(int n)
{
	int a;
	int b;
	int c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;

				if (c < 10)
				{
					_putchar(c + '0');
					if (b == n)
					{
						break;
					}
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if (c >= 10 && c <= 99)
				{
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
					if (b == n)
					{
						break;
					}
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if (c > 99 && c < 999)
				{
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
					if (b == n)
					{
						break;
					}
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}

			}
			_putchar('\n');
		}
	}
}
