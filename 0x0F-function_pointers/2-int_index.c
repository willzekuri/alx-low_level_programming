#include "function_pointers.h"

/**
 * int_index - A function that returns index of a key
 *
 * @array: The array to be searched
 * @size: The number of elements in the array
 * @cmp: pointer to the function to be used to
 * compare values
 *
 * Return: index of array if found
 * or -1 if no element matches
 * or -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (a = 0; a < size; a++)
			{
				if (cmp(array[a]))
					return (a);
			}
		}
	}

	return (-1);
}
