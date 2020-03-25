#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given index
 * @head: head of list
 * @index: index to delete node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *del;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	i = 0, tmp = *head;

	while (i < index - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (i != index - 1 || tmp->next == NULL)
	return (-1);

	del = tmp->next->next;
	free(tmp->next);
	tmp->next = del;

	return (1);
}
