#include "main.h"
#include <stddef.h>
/**
 * _strchr - searches fr the first occurance of char c in
 * a string s.
 * @s: string input
 * @c: char input
 *
 * Return: Always 0 on success.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
