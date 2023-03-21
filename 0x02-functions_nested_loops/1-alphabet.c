#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	int a = 'a';
	
	while(a <= 'z')
	{
		_putchar(a);
		_putchar('\n');
		a++;
	}
	
	return (a);
}
