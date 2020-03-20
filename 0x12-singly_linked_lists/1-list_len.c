#include <stdlib.h>
#include "lists.h"

/**
* list_len - main
* @h: pointer to first node in linked list
* Return: number of elements in list
*/

size_t list_len(const list_t *h)
{

	list_t *node;
	size_t c = 0;

	if (h == NULL)
	return (0);

	for (node = (list_t *)h; node != NULL; node = node->next)
	c++;
	return (c);
}
