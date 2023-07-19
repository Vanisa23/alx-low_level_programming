#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name using ptr to a function.
 * @name: a pointer to a character that will be used as input
 * to the function pointed to by 'f'
 * @f: a function ptr that points to a function that takes char
 * ponter as an arg and returns void.
 *
 * Return: nothing, if either name or f is null, otherwise return
 * name.
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
