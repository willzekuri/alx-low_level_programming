#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

	return (a);
}
