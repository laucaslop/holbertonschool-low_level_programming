#include "lists.h"
/**
* dlistint_len - Function that returns the number of nodes in a DLL.
* @h: Pointer to the head of the double linked list.
* Return: The number of nodes.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
