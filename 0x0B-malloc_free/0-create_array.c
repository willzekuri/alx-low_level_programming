#include <stdlib.h>
#include "main.h"

/**
**create_array - Function to return the pointer to an address
*@size: parameter that holds the size of the array
*@c: parameter that holds the character
*
*Return: pointer to memory address
*/

char *create_array(unsigned int size, char c)
{
	char *ptrArray;
	unsigned int a = 0;

	ptrArray = malloc(size * sizeof(char));

	if (size == 0 || ptrArray == 0)
	{
		return (NULL);
	}

	while (a < size)
	{
		ptrArray[a] = c;
		a++;
	}

	return (ptrArray);
}
