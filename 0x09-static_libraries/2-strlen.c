#include "main.h"
/**
 * _strlen - returns an integer representing the length of a
 * string
 * @s: string input whose length is determined
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
