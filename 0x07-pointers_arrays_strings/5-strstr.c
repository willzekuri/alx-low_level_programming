#include "main.h"

/**
  * _strstr - A function that locates a substring
  *
  * @haystack: the string to search
  * @needle: the string to be found
  *
  * Return: char
  */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a]; a++)
	{
		for (b = 0; needle[b]; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
	}

	return ('\0');
}
