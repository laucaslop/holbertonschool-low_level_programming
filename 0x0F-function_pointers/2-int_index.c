#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - main
* @array: input array
* @size: number of elements in the array
* @cmp: pointer to the function to be used to compare values
* Return: returns the index of the first element or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL)
	{
		int i, j;

		if (size <= 0)
		return (-1);

		for (j = 0; j < size; j++)
		{
			i = cmp(array[j]);

			if (i != 0)
			{
				return (j);
			}
		}
	}
	return (-1);
}
