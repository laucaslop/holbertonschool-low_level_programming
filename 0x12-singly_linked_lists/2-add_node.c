#include "lists.h"
/**
* add_node - main
* @head: current head of the list
* @str: new string to make node for new head
* Return: pointer to new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int e;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);
	if (*head == NULL)
	new->next = NULL;

	else

	new->next = (*head);
	*head = new;
	new->str = strdup(str);
	e = 0;
	while (str[e] != '\0')
	e++;
	new->len = e;
	return (new);
}
