#include "main.h"
/**
 * _abs - returns absolute value of a number
 * @n: the parameter and argument
 * Return: -n(if n is less than 0), n otherwise
 *
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
		return (n);

}
