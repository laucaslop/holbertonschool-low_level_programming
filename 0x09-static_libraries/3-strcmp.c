#include "holberton.h"

/**
* _strcmp - main
* Return: Always 0
* void: nothing
* @s1: int pointer
* @s2: int pointer
*/

int _strcmp(char *s1, char *s2)

{
	int i = 0, j = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	i++;

	if (s1[i] != s2[i])
	j = s1[i] - s2[i];

	return (j);
}
