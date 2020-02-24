#include "holberton.h"
#include<string.h>

/**
* _memcpy - main
* @dest: an array where src will be copied
* @src: the string to be copied
* @n: number of characters to copy
* Return:  a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i = 0;

	for (i = 0; i < n; i++)

	dest[i] = src[i];

	return (dest);
}
