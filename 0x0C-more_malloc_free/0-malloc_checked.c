#include "main.h"

/**
*malloc_checked - Function that allocates memory using malloc
*@b: parameter of function
*
*Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
