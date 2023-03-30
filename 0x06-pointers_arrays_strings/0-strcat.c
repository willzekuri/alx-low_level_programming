#include "main.h"

/**
*_strcat - Concatenates two strings
*@dest: First pointer parameter
*@src: second pointer parameter
*Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i] != '\0'; dest++)
	{
		_putchar(dest[i]);
	}

	for (i = 0; src[i]!= '\0'; src++)
	{
		_putchar(src[i]);
	}
	return (0);
}
