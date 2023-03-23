#include "main.h"
/**
*_isdigit - used to check if a character is a digit
* @c: parameter
*Return: 0(if c is a digit) 1(if c is not)
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
