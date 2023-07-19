#include "function_pointers.h"
/**
 * int_index - searches for an element in an integer array for
 * which a comprison condition specified by  fuction pointed
 * to by 'cmp'is true
 * @array: a pointer to an integer array (or the first element of
 * the array)
 * @size: an integer representing the number of elements in
 * the array.
 * @cmp: a function pointer that points to a function taking an
 * 'int'as an argument and returning 'int'
 *
 * Return: the index of the first element that satisfies the
 * condition. if no element satisfies the condition,return -1
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
