#include "holberton.h"

/**
* _strspn - main
* @s: string to count in
* @accept: chars to accept
* Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i;

	n = 0;
	while (*s)
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(accept + i) == *s)
				break;
		}
		if (*(accept + i) != '\0')
			n++;
		else
			break;
		s++;
	}
	return (n);
}
