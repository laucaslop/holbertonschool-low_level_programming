#include "lists.h"

/**
* sum_listint - main
* @head: head of linked list
* Return: sum of all the data of listint_t linked list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
