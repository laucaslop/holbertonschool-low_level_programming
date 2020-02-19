#include "holberton.h"
#include <stdio.h>

/**
* *_strcpy - main
* void: nothing
* @dest: char pointer
* @src: char pointer
* Return: void
*/

char *_strcpy(char *dest, char *src)

{

int c = 0;

	while (src[c] != '\0')
	{
		dest[c] = src[c];

		c++;
	}
	dest[c] = src[c];

	return (dest);
}
