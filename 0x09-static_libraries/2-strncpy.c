#include "main.h"
/**
 * _strncpy - copies a given number of characters
 * from a source string into a destination string
 * @dest: destination
 * @src: source
 * @n: int representing the number of char to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
