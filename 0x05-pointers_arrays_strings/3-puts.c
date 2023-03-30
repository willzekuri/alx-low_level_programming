#include "main.h"

/**
*_puts - A function to print string, followed by new line.
*@str: pointer parameter
*
*/

void _puts(char *str)
{

	for (; *str != '\0'; str++)
	{
		if (*str != '\0')
		{
			_putchar(*str);
		}

	}
	_putchar('\n');
}
