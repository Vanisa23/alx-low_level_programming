#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array.
 * @array: a ptr to the start of an array of integers
 * @size: the number of elements in the array
 * @action: a function pointer that points to a function that
 * takes an argment and returns void.
 *
 * Return: nothing if either of the inputs is missing.
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
