#include "lists.h"
/**
* free_list - main
* @head: head of linked list
*/

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
