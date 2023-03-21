#include "main.h"
/**
 * _islower - returns 1 if argument is lowercase and 0 otherwise
 * @c: the parameter and argument
 * Return: Always 0.
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);


	return (c);
}
