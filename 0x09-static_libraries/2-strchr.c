#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
* _strchr - main
* @c: character
* @s: string
* NULL if the character is the character is not found
* Return: c in the string s
*/

char *_strchr(char *s, char c)
{

	while (*s)

	{
		if (*s == c)
		return (s);
		s++;
	}
		if (*s == c)
		return (s);
		return (NULL);
}
