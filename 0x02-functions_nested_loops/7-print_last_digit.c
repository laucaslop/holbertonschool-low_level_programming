#include "holberton.h"

/**
 * print_last_digit - Prints last digit of integer
 * @n: Number to print last digit of
 * Return: Value of last digit
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (n < 0)

	ld = ld * -1;
	_putchar('0' + ld);

	return (ld);
}
