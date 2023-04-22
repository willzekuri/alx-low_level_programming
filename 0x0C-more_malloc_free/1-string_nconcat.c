#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - Function that concatenates two strings
*@s1: first set of string to be concatenated
@s2: second string to concat
@n: number of bytes
*
*Return: NULL if failed
*empty string if NULL is passed
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a = 0, b = 0, str1 = 0, str2 = 0;

	while (s1 && s1[str1])
		str1++;

	while (s2 && s2[str2])
		str2++;

	if (n < str2)
		ptr = malloc(sizeof(char) * (str1 + n + 1));

	else
		ptr = malloc(sizeof(char) * (str1 + str2 + 1));

	if (!ptr)
		return (NULL);

	while (a < str1)
	{
		ptr[a] = s1[a];
		a++;
	}

	while (n < str2 && a < (str1 + n))
		ptr[a++] = s2[b++];

	while (n >= str2 && a < (str1 + str2))
		ptr[a++] = s2[b++];

	ptr[a] = '\0';

	return (ptr);
}
