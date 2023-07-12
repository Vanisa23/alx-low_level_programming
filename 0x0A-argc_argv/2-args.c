#include <stdio.h>
#include "main.h"
/**
 * main- prints the arguments passed in the prog.
 * @argc: number of args.
 * @argv: array of args.
 *
 * Return: always 0 on success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
