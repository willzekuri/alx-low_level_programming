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

	if (size == 0)
		return (NULL);
	
	else
	{	
		ptrArray = malloc(size * sizeof(char));
		while (a < size)
		{
			ptrArray[a] = c;
			a++;
		}
	}
	return (ptrArray);
}
