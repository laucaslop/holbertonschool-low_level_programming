#include "lists.h"

/**
* print_dlistint - Prints all the elements of a dlistint_t list.
* @h: Head of list.
* Return: Number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *list;
	size_t s = 0;

	list = h;
	while (list)
	{
		printf("%d\n", list->n);
		list = list->next;
		s++;
	}
	return (s);
}
