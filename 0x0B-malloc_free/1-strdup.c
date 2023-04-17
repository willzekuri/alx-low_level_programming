#include <stdlib.h>
#include "main.h"

/**
*strlen - Function to check length of string
*@s: parameter and string to be checked
*Return: string length
*/
int str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
**_strdup - Function that returns a pointer to a newly allocated space in
*memory,which contains a copy of the string given as a parameter
*@str: parameter to the function
*Return: Pointer to the memory address
*
*/
char *_strdup(char *str)
{
	char *strChar;
	int size;
	int i = 0;

	size = str_len(str);

	strChar = malloc((size + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		strChar[i] = str[i];
		i++;
	}

	return (strChar);
}
