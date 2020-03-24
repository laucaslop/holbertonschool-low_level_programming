#include "lists.h"

/**
* listint_len - main
* @h: head for listint_t struct
* Return: returns number of nodes
*/
size_t listint_len(const listint_t *h)
{
	int e;

	e = 0;

	while (h != NULL)
	{
		h = h->next;
		e++;
	}

	return (e);
}
