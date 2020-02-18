#include <stdio.h>
#include "holberton.h"

/**
* _strlen - main
* void: nothing
* @s: char pointer
* Return: void
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
