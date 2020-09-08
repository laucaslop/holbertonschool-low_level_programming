#include "holberton.h"

/**
* flip_bits - returns the number of bits
* @n: number to compare
* @m: number to compare
* Return: the number of bits you would need to flip
* to get from one number to another
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned int b;

	b = 0;
	a = n ^ m;

	while (a)
	{
		if (a & 1)
		b++;

		a = a >> 1;
	}
	return (b);
}
