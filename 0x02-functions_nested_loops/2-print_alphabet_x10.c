#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - prints the alphabet in lower case 10 times
 *
 * Return: Always 0.
 */

int print_alphabet_x10(void)
{
	int a = 'a';
	int j;

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

	j = 0;
	while (j < 9)
	{
		print_alphabet();
		j++;
	}

	return (j);
}
