#include "main.h"
/**
 * _strcpy - copies a string from a source to a destination.
 * @dest: destination string
 * @src: source string
 *
 * Return: dest after copying the string to it.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
