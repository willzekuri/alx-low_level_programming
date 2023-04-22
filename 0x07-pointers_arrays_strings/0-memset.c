#include "main.h"

/**
*_memset - Function thst fills memory with constant byte
*@s: parameter for memory area
*@b: parameter 2 which is the constant byte
*@n: unsigned integer parameter which is bytes of the memory area
*
*Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
