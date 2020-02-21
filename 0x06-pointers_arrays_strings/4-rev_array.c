#include "holberton.h"
#include <stdio.h>

/**
* reverse_array - main
** @a: an array of integers
* @n: the number of elements to swap
* Return: nothing.
*/

void reverse_array(int *a, int n)

{
	int i, j, interm;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		interm = a[i];
		a[i] = a[j];
		a[j] = interm;
	}
}
