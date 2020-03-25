#include "lists.h"

/**
* free_listint2 - main
* @head: pointer to a pointer to head of a linked list
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

}
