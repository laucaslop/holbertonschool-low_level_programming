#include "holberton.h"
#include <stdio.h>

/**
* string_toupper - main
* @a: char pointer
* Return: void
* void: nothing
*/

char *string_toupper(char *a)
{
	int c;

	for (c = 0; a[c] != '\0'; c++)
	{
		if (a[c] >= 'a' && a[c] <= 'z')
		{
			a[c] = a[c] - 32;
		}
	}
	return (a);
}
