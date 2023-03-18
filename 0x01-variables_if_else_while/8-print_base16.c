#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*
*/
int main(void)
{
	int hex;
	int hex_alpha;

	for (hex = '0'; hex <= '9'; hex++)
	{
		putchar(hex);
	}

	for (hex_alpha = 'a'; hex_alpha <= 'f'; hex_alpha++)
	{
		putchar(hex_alpha);
	}
	putchar('\n');
	return (0);
}
