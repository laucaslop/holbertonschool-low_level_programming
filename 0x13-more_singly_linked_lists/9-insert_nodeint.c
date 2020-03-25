#include "lists.h"
/**
* insert_nodeint_at_index - main
* @head: pointer to pointer of head of linked list
* @idx: index to put new node
* @n: number for n element of struct of linked list
* Return: The new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newn;
	listint_t *temp = *head;
	unsigned int i = 0;

	while (temp && i < idx - 1)

	{
		temp = temp->next;
		i++;
	}
	if (temp || (i == idx - 1 || idx == 0))

	{
		newn = malloc(sizeof(listint_t));

		if (newn)

		{
			newn->n = n;

			if (idx == 0)
			{
				newn->next = *head;
				*head = newn;
			}

			else
			{
				newn->next = temp->next;
				temp->next = newn;
			}
			return (newn);
		}
	}
	return (NULL);
}
