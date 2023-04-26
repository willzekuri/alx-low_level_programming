#include "function_pointers.h"

/**
 * print_name - function that prints name
 *
 * @name: Name to change to uppercase
 * @f: A pointer to a function that change names to uppercase
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{

	if (name != NULL && f != NULL)
		f(name);
}
