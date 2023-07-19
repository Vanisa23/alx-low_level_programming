#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 for incorrect number of arguments,
 *         or 2 for negative number of bytes.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *ptr = (unsigned char *)main;

	for (int i = 0; i < bytes - 1; i++)
		printf("%02x", ptr[i]);
	printf("%02x\n", ptr[bytes - 1]);
	return (0);
}
