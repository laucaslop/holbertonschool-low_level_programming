#include "lists.h"
/**
* get_dnodeint_at_index - Return node at index
* @head: head of a list
* @index: Index to return
* Return: Node at index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int e;

	for (e = 0; e < index; e++)
	{
		if (head == NULL)
		return (NULL);
		head = head->next;
	}
	return (head);
}
