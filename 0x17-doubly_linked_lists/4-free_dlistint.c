#include "lists.h"
/**
* free_dlistint - frees a dlist
* @head: head of dlist
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head;
		free(next);
		head = head->next;
	}
}
