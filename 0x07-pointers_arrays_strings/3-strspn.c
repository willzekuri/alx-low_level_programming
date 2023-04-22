#include "main.h"

/**
  * _strspn - A function that gets the length of a prefix substring
  *
  * @s: Initial segment
  * @accept: Accepted strings
  *
  * Return: Number of bytes in the initial segment
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, k = 0;

	for (a = 0; accept[a]; a++)
	{
		for (b = 0; s[b] != 32;  b++)
		{
			if (accept[a] == s[b])
			{
				k++;
			}
		}
	}

	return (k);
}
