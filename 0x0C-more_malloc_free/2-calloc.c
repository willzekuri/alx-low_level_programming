#include "main.h"
#include <stdlib.h>

char *_memset(char *string, char bytes, unsigned int n);

/**
 * _calloc - A function that allocates memory for array with malloc
 *
 * @nmemb: Number of elements
 * @size: Size of the array
 *
 * Return: A pointer to the allocated memory
 * if nmemeb or size = 0, returns NULL
 * if malloc fails, returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);

	if (str == NULL)
		return (NULL);

	_memset(str, 0, nmemb * size);

	return (str);
}

/**
 * *_memset - fills memory with a constant byte
 *
 * @string: memory area to be filled
 * @bytes: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area string
 */

char *_memset(char *string, char bytes, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		string[a] = bytes;
	}

	return (string);
}
