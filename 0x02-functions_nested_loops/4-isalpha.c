#include "main.h"
/**
 * _isalpha - returns 1 if c is a letter and 0 otherwise
 * @c: the parameter and argument
 * Return: 1(true) or 0(false)
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);


	return (c);
}
