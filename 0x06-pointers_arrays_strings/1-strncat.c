#include "main.h"

/**
*_strncat - function to concatenate 2 strings
*@dest: parameter to be concatenated to
*@src: parameter to be concatenated
*@n: limit of the concatenation
*
*Return: Always 0(success)
*/

char *_strncat(char *dest, char *src, int n)
{
	int concat = 0, i = 0;

	while (dest[concat])
	{
		concat++;
	}

	while (i < n && src[i])
	{
		dest[concat] = src[i];
		concat++;
		i++;
	}

	dest[concat + n + 1] = '\0';

	return (dest);
}
