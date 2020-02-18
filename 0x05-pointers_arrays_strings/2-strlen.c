#include "holberton.h"
#include <stdio.h>

/**
* _strlen - main entry
* void: nothing
* @s: char pointer
* return: void
**/

int _strlen(char *s)

{
	int c = 0;

	while (s[c] != '\0')

		{
		c++;
		}

	return (c);
}
