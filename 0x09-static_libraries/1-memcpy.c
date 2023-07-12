#include "main.h"
/**
 * _memcpy - copies a block of memory from one location to another
 * @dest: destination memory where the data will be copied
 * @src: source memory to be copied
 * @n: number of bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
