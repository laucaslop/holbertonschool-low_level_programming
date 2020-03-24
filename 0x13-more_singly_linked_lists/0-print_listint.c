#include "lists.h"

/**
* print_listint - main
* @h: head of the list
* Return: number of nodes in list
*/
size_t print_listint(const listint_t *h)
{
	int e;

	e = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		e++;
	}

	return (e);
}
