#include "holberton.h"

/**
* _strlen_recursion - main
* void: nothing
* @s: string to print
* Return: int containing
**/

int _strlen_recursion(char *s)
{
	if (!*s)
	return (0);
	return (1 + _strlen_recursion(s + 1));
}
