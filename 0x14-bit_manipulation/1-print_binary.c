#include "holberton.h"

/**
* bi_print - prints the binary representation of a number
* @n: number to print
*/
void bi_print(unsigned long int n)
{
	if (n == 0)
	return;

	bi_print(n >> 1);

	if ((n & 1) == 1)
	_putchar('1');

	if ((n & 1) == 0)
	_putchar('0');
}

/**
* print_binary - prints the binary representation of a number
* @n: number to print
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
	_putchar('0');

	else
	bi_print(n);
}
