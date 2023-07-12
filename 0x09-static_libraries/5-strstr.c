#include "main.h"
/**
 * _strstr - takes two string pointers as arguments - haystack
 * and needle. The function searches for the first occurrence
 * of the needle string in the haystack string
 * and returns a pointer to the first character of the match.
 * If the needle string is not found, the function
 * returns a null pointer.
 * @haystack: input
 * @needle: input
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
