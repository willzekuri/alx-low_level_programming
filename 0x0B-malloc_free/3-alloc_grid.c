#include <stdlib.h>
#include "main.h"

/**
*alloc_grid - Function that returns a pointer to a 2
*dimensional array of integers
*@width: parameter to determine the width of the multi-dimensional array
*@height: height of the array
*
*Return: pointer to 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
	int **ptrArray;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptrArray = malloc(sizeof(int *) * height);

	if (ptrArray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptrArray[i] = malloc(sizeof(int) * width);

		if (ptrArray[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(ptrArray[i]);
			}

			free(ptrArray);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptrArray[i][j] = 0;
	}

	return (ptrArray);
}
