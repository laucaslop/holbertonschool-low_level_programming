#include "lists.h"

/**
* get_nodeint_at_index - main
* @head: head of the list
* @index: Index of the node
* Return: NULL if head is empty
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int e = 0;
	listint_t *temp = head;

	if (temp == NULL)
	return (NULL);

	while (e < index)
	{
		temp = temp->next;
		if (temp == NULL)
		return (NULL);
		e++;
	}

	return (temp);
}
