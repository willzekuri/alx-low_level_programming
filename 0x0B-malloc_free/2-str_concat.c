#include <stdlib.h>
#include "main.h"

/**
*str_len - Function to check length of string
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
**str_concat - Function that concatenates two strings
*@s1: first parameter to the function
*@s2: second parameter to function
*Return: Pointer to newly allocated space in memory
*that contains the concatenation of s1 and s2
*
*/
char *str_concat(char *s1, char *s2)
{
	char *strChar;
	int sizeS1, sizeS2, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	sizeS1 = str_len(s1);
	sizeS2 = str_len(s2);

	strChar = malloc((sizeS2 + sizeS1 + 1) * sizeof(char));

	if (strChar == NULL)
	{
		return (NULL);
	}

	i = j = 0;

	while (s1[i] != '\0')
	{
		strChar[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		strChar[i] = s2[j];
		i++, j++;
	}
	strChar[i] = '\0';

	return (strChar);
}
