#include "main.h"
/**
 * _strpbrk - takes two string pointers as arguments - s and accept
 * @s: input string
 * @accept: input string
 *
 * Return: 0 on success
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
