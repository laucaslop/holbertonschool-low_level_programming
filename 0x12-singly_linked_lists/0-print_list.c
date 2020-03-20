#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_list - main
* @h: pointer to elemnts of type list_t
* Return: the number of nodes in the list
*/

size_t print_list(const list_t *h)
{
	size_t c;

	c = 0;
	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}
	return (c);
}
