#include "holberton.h"
#include <stdio.h>

/**
* _print_rev_recursion - main
* @s: string to print
* Return: void.
*/

void _print_rev_recursion(char *s)

{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
