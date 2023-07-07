/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
#include "main.h"

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
