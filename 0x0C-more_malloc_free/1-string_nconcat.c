#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
* string_nconcat - main
* @s1: pointer
* @s2: pointer
* @n: unsigned int
* Return: char pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a1, a2, b1, b2;
	char *pconcat;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (a1 = 0; s1[a1] != '\0'; a1++)
	{}

	for (a2 = 0; s2[a2] != '\0'; a2++)
	{}

	if (n >= a2)
	{
	n = a2;
	}

	pconcat = malloc(sizeof(char) * (a1 + n) + 1);

	if (pconcat != NULL)
	{
		for (b1 = 0; s1[b1] != '\0'; b1++)
		pconcat[b1] = s1[b1];

		for (b2 = 0; b2 < n; b2++, b1++)
		{
		pconcat[b1] = s2[b2];
		}
		pconcat[b1] = '\0';
		return (pconcat);
	}
	else
	{
		return (NULL);
	}
}
