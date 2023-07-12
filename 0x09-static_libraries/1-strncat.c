#include "main.h"
/**
 * _strncat - concatenate two strings, taking into account a
 * maximum number of bytes to be used from the source string.
 * @dest: destination string, this is where the concatenated
 * string will be stored.
 * @src: source string to be concatenated.
 * @n: max number of bytes to be used from src.
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
