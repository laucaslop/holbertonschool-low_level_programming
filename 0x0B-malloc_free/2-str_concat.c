#include <stdlib.h>
#include "holberton.h"

/**
* str_concat - main
* @s1: first string
* @s2: second string
* Return: NULL or the value of dest
*/

char *str_concat(char *s1, char *s2)

{
	unsigned int a, b, c, d;
	int size;
	char *dest;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = 0;
	while (*(s1 + a) != '\0')
	{
		a++;
	}
	b = 0;
	while (*(s2 + b) != '\0')
	{
		b++;
	}
	size = a + b;
	dest = malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		*(dest + c) = *(s1 + c);
	}
	for (d = 0; d < b; d++)
	{
		*(dest + (c + d)) = *(s2 + d);
	}
	return (dest);
}
