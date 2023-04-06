#include "main.h"

/**
*_strlen_recursion - Function that prints string using recursion in reverse
*@s: parameter of the function
*Return: void
*/
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
