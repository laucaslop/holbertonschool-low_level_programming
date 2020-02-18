#include "holberton.h"

/**
* _puts - main
* Return: void
* void: nothing
* @str: char pointer
**/

void _puts(char *str)

{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		{
			_putchar(str[c]);
		}
	_putchar('\n');
}
