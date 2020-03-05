#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
* malloc_checked - main
* @b: character to print
* Return: void
*/

void *malloc_checked(unsigned int b)

{
	void *p = malloc(b);

	if (p == NULL)
	exit(98);

	return (p);
}
