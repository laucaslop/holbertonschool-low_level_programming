#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>

/**
* array_range - main
*@min: pointer
*@max: pointer
* Return: int pointer
*/

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
	return (NULL);

	for (i = 0; min <= max; i++, min++)
	array[i] = min;

	return (array);
}
