#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - Prints last digit of number
 * @n: Number to print last digit of
 * Return: Value of last digit
 */

int print_last_digit(int n)
{
	int digit;

	if (n < 0)
{
	n = n * -1;
}
	digit = n % 10;
	_putchar(digit + '0');

	return (digit);
}
