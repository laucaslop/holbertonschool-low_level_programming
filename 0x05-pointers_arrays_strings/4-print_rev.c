#include "holberton.h"
#include <stdio.h>

/**
* print_rev - main
* void: nothing
* @s: char pointer
* Return: void.
*/

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c--; s[c] != '\0'; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
