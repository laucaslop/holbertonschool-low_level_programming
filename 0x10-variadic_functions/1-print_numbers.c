#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* void print_numbers - main
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
* @...: a variable number of numbers to be printed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list nums;
	unsigned int ind;

	va_start(nums, n);
	for (ind = 0; ind < n; ind++)
	{
		printf("%d", va_arg(nums, int));

		if (ind != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
