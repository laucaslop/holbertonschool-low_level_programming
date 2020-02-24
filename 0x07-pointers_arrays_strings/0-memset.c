#include "holberton.h"
#include<string.h>

/**
* _memset - main
* @s: memory area
* @b: constant byte
* @n: number of bytes
* Return: a pointer
*/

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	i = 0;
	for (i = 0; i < n; i++)


	s[i] = b;

	return (s);
}
