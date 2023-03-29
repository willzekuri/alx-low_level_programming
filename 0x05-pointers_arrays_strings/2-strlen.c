#include "main.h"

/**
*strlen - function that returns length of string
*@s: parameter as a pointer
*return: always 0
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
