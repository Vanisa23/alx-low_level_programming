#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - takes two integers as args and return their sum
 * @a: argument one
 * @b: argument two
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - This function takes two integers, a and b, as
 * arguments and returns their difference (subtraction)
 * @a: arg one
 * @b: argument two
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - This function takes two integers, a and b, as
 * arguments and returns their product (multiplication).
 * @a: argument one
 * @b: argument two
 *
 * Return: the product of  and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - This function takes two integers, a and b, as
 * arguments and returns their division (quotient)
 * this function does integer division, so any fractional
 * part will be truncated.
 * @a: argument
 * @b: argument
 *
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - This function takes two integers, a and b, as
 * arguments and returns the remainder of the division of
 * a by b (modulo operation).
 * @a: argument one
 * @b: argument two
 *
 * Return: the remainder of the div of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
