#include "holberton.h"

/**
* prime - detects if an input number is a prime number
* @n: input number
* @j: iterator
* Return: 1 if n is a prime number, 0 if n isn't a prime number
*/

int prime(unsigned int n, unsigned int j)
{
	if (n % j == 0)
	{
		if (n == j)
		return (1);
		else
		return (0);
	}
	return (0 + prime(n, j + 1));
}

/**
* is_prime_number - main
* @n: input number
* Return: natural square root
*/

int is_prime_number(int n)

{
	if (n < 0)
	return (-1);

	else if (n == 0)
	return (0);

	else if (n == 1)
	return (1);

	return (prime(n, 2));
}
