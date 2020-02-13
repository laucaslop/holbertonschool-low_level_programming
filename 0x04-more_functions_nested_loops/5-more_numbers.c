#include "holberton.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* Return: void
*/

void more_numbers(void)
{
	int a, n;

	for (n = 0; n < 10; n++)
{
	for (a = 0; a <= 14; a++)
{
	if (n > 9)

	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}
	_putchar('\n');
}
}
