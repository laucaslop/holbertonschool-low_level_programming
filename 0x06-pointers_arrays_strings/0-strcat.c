#include "holberton.h"
#include <stdio.h>

/**
* *_strcat - main
* void: nothing
* @dest: char pointer
* @src: char pointer
* Return: void
*/

char *_strcat(char *dest, char *src)

{
int c, z;

	for (c = 0; dest[c] != '\0'; c++)

	{
		for (z = 0; src[c] != '\0'; z++, c++)
		{
		}
	}

		{
			dest[c] = src[z];
		}

	return (dest);
}
