#include "main.h"

/**
*_memcpy - Function that copies n bytes frm memory area src to memory area dest
*
*@dest: memory area
*@src: memory area
*@n: number of bytes to copy
*
*Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
