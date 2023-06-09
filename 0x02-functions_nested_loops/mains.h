#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

char print_alphabet(void)
{
	char a = 'a';
	
	while(a <= 'z')
	{
		_putchar('a');
		a++;
	}
	_putchar('\n');
	return (a);
}
