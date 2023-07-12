#include "main.h"
/**
 * _isupper - determines if a given character is an uppercase letter
 * @c: char to check.
 *
 * Return: 1 if uppecase, 0 if not.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
