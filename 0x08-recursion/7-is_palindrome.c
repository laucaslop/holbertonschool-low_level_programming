#include "holberton.h"

/**
* _strlen - finds length of a string
* @s: string to be parsed through
*Return: length of the string, without the null terminator
*/

int _strlen(char *s)
{
	if (!*s)
	return (0);

	else
	return (1 + _strlen(s + 1));
}

/**
* palindrome_help - main
* @s: string to be checked as a palindrome
* @len: length of a string
* @i: iteration
* Return: 1 if is a palindrome, 0 if not
*/

int palindrome_help(char *s, int len, int i)
{
	if (_strlen(s) == 0)
	return (0);

	if (*(s + i) != *(s + len - 1))
	return (0);

	else if (i > (len - 1))
	return (1);

	else
	return (palindrome_help(s, len - 1, i + 1));
}

/**
* is_palindrome - main
* @s: string
* Return: 1 if string is a palindrome, 0 if not
*/

int is_palindrome(char *s)
{
	return (palindrome_help(s, _strlen(s), 0));
}
