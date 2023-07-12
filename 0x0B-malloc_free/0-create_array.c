#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 *
 * Description:
 * This function dynamically allocates an array of size 'size' and assigns each
 * element in the array with the character 'c'.
 * If 'size' is 0 or if the memory allocation fails,
 * the function returns NULL.
 *
 * Return:
 * Pointer to the created array, or NULL if failed
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size); /* Allocate memory for the array */
	if (size == 0 || str == NULL) /* Check if allocation was successful */
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c; /* Assign each element in the array with 'c' */

	return (str); /* Return the pointer to the created array */
}
