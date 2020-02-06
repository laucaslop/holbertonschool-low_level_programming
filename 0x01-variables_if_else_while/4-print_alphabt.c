#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */

int main(void)

{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)

{
	if ((c != 'q') && (c != 'e'))

{
	putchar (c);
}
}
	putchar('\n');

	return (0);
}
