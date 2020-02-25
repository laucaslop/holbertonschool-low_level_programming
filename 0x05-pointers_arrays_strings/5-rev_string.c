#include "holberton.h"
#include <stdio.h>
/**
* rev_string - main
* @s: char pointer
* Return: void
* void: nothing
**/

void rev_string(char *s)

{
	int lenght = 0;
	int i;
	char ch;

	while (s[lenght] != '\0')
	{
		lenght++;
		printf("value of inside while: %d\n", lenght);
	}
	for (lenght--, i = 0; i < lenght; lenght--, i++)
	{
		ch = s[i];
		s[i] = s[lenght];
		s[lenght] = ch;
		printf("value fn: %d\n", lenght);
	}
}
