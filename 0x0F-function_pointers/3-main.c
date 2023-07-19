#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"
/**
 * main- the entry point of the program
 * @argc: an integer representing the number of command line
 * arguments passed to the program.
 * @argv: an array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int__attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (arf != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
