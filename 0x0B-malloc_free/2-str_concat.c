#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the concatenated string, or NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int i, j;

	/* Check if either string is NULL, and set it to empty string if so */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of the strings */
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	/* Allocate memory for the concatenated string */
	concatenated = malloc(sizeof(char) * (i + j + 1));

	if (concatenated == NULL)
		return (NULL);

	/* Copy the contents of the first string to the concatenated string */
	i = 0;
	while (s1[i] != '\0')
	{
		concatenated[i] = s1[i];
		i++;
	}

	/* Append the contents of the second string to the concatenated string */
	j = 0;
	while (s2[j] != '\0')
	{
		concatenated[i] = s2[j];
		i++;
		j++;
	}

	concatenated[i] = '\0';
	return (concatenated);
}
