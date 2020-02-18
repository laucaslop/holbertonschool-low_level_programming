#include "holberton.h"
#include <stdio.h>

/**
* swap_int - main
* void: nothing
* @a: integer
* @b: integer
**/

void swap_int(int *a, int *b)

{
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}
