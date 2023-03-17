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
	char characters;
	char uppercase;

	for (characters = 'a'; characters <= 'z'; characters++)
	{
		putchar(characters);
	}
		for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		{
			putchar(uppercase);
		}
	putchar('\n');

	return (0);
}
