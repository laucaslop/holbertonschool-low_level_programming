#include "holberton.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: base 10 number
* @index: index to insert
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int data;

	data = (sizeof(unsigned long int) * 8 - 1);
	if (index > data)
	return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
