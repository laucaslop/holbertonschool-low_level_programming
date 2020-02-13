#include "holberton.h"
/**
* print_diagonal - draw a diagonal line
* return - void
* @n: integer variable
*/
void print_diagonal(int n)

{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
				}
	}
	else
	{
		_putchar('\n');
	}
}
