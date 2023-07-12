#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments into a single string
 * @ac: Number of arguments
 * @av: Array of argument strings
 *
 * Return: Pointer to the concatenated string, or NULL if failed
 */
char *argstostr(int ac, char **av)
{
	int i, j, length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
	}
	length += ac;

	str = malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);

	/* Concatenate the argument strings */
	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[length] = av[i][j];
			length++;
		}
		if (str[length] == '\0')
		{
			str[length++] = '\n';
		}
	}
	str[length] = '\0';

	return (str);
}
