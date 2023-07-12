#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string to a new memory space location
 * @str: Input string
 *
 * Return: Pointer to the duplicated string, or NULL if failed
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	i = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	/* Allocate memory for the duplicate string */
	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	/* Copy the contents of the input string to the duplicate string */
	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
