#include "holberton.h"
#include <stdio.h>

/**
* print_array - main
* void: nothing
* @a: int pointer
* @n: number of elements of the array to be printed
* Return: void
*/

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n - 1; c++)
	{
		printf("%d, ", a[c]);
	}
	if (c == n - 1)
		printf("%d", a[c]);

	printf("\n");
}
