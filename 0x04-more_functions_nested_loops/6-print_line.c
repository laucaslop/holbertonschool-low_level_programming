#include "holberton.h"
/**
* print_line - draw a straight line
* return - void
* @n: integer variable
*/
void print_line(int n)

{
	int i;

	if (n > 0)
{
	for (i = 0; i < n; i++)
{
	_putchar('_');
}
	_putchar('\n');
}
	else
{
	_putchar('\n');
}
}
