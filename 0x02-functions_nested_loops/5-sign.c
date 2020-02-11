#include <stdio.h>
#include "holberton.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Number that is being checked
 * Return: 1 and prints + if n is positive
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
	else if (n < 0)
{
	_putchar('-');
	return (-1);
}
	else
{
	_putchar('0');
	return (0);
}
}
