#include "main.h"

/**
 * _isalpha - checks whether a given character is alphabet or not
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
