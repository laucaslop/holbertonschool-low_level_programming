#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argumemnts
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, k;
	int (*p_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	p_func = get_op_func(argv[2]);
	if (p_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	k = p_func(i, j);

	printf("%d\n", k);
	return (0);
}
