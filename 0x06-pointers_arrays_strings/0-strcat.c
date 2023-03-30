#include "main.h"

/**
*_strcat - Concatenates two strings
*@dest: First pointer parameter
*@src: second pointer parameter
*Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i])
	{
		i++;
	}

	for (j = 0; src[j] != 0; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
