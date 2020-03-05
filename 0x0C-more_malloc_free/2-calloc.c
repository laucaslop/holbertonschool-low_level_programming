#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>

/**
* _calloc - main
* @size: pointer
* @nmemb: pointer
* Return: char pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)

{
	unsigned int c;
	char *arr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < nmemb * size; c++)
	arr[c] = '\0';

	return (arr);
}
