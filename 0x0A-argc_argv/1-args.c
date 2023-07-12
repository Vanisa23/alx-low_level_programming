#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of args passed to the prog.
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
