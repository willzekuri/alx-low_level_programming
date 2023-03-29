#include "main.h"

/**
*_strlen - function that returns length of string
*@s: parameter as a pointer
*Return: len(return the length of string)
*/

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}

	return (len);
}
