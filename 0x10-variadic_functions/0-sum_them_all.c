#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - main
* @n: number of parameters
* Return: the sum of all its parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum, i;
	va_list list;

	if (n == 0)
	return (0);

	va_start(list, n);
	sum = i = 0;
	while (i < (int) n)
	{
		sum += va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
}
