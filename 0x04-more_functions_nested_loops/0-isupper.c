#include "main.h"
/**
*_isupper - used to check if a character is upper case
* @c: parameter
*Return: 0(if c is lowercase) 1(if c is uppercase)
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
