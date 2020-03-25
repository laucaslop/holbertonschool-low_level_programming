#include <stdlib.h>
#include "lists.h"

/**
* free_listint - main
* @head: pointer to head of linked list
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
