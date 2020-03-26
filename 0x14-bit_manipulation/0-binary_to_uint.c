#include "holberton.h"

/**
* binary_to_uint - converts a binary to an unsigned int
* @b: binary
* Return: the converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	num = 0;
	if (b == NULL)
	return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
		return (0);
		}
		num = (num * 2) + (b[i] - '0');
	}

	return (num);
}
