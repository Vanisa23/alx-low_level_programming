#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg>
/**
 * print_numbers - prints a varible number of intergers
 * followed by a new line.
 * @separator: the string printed between the numbers
 * @n: number of integers passed to the function.
 * @...: a variable number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));
		if (index != (n - 1) && separator != NULL)
			print("%s", separator);
	}
	printf("/n");
	va_end(nums);
}
