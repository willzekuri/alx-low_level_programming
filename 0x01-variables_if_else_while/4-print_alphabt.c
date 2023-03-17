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

	for (characters = 'a'; characters <= 'z'; characters++)
	{
		if (characters == 'e' || characters == 'q')
		{
			continue;
		}
		putchar(characters);
	}
	putchar('\n');

	return (0);
}
