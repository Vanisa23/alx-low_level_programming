#include "main.h"
/**
 * _puts - prints a string to the stdout followed by a new line.
 * @str: string to print.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str++);
	}
	_putchar('\n');
}
