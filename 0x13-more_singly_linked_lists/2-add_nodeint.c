#include "lists.h"

/**
* add_nodeint - main
* @head: head of the list
* @n: value to add to new node
* Return: returns new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
