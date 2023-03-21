#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case
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

	while (j < 9)
	{
		print_alphabet();
		j++;
	}

	return (j);
}
