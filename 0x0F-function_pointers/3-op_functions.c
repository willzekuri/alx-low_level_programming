#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func -  A function that gets an operator function
 *
 * @s: Operator passed as argument to program
 *
 * Return: Result of operation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a = 0;

	while (a < 5)
	{
		if (strcmp(s, ops[a].op) == 0)
			return (ops[a].f);
		a++;
	}

	return (0);
}
