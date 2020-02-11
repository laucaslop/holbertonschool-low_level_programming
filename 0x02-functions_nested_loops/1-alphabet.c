#include "holberton.h"

/**
 * print_alphabet - uses the print_alphabet funcion
 * Return: nothing
 */
void print_alphabet(void)

{
	int a;

	a = 'a';
	while (a <= 'z')
	{
	_putchar (a++);
	}
	_putchar(10);
}
