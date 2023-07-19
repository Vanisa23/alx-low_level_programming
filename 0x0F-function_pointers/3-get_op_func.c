#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - this function is to determine the arithmetic
 * operation requested by the user (through the operator passed
 * as an argument) and return a pointer to the corresponding
 * arithmetic operation function
 * @s: the single argument taken which is a pointer to a character
 * (the operator)
 *
 * Return: a pointer to the corresponding operation function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
