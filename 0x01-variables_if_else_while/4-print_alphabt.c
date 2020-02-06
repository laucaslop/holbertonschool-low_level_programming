#include <stdio.h>

/**
 * main - prints whether a random number is postive or negative
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
