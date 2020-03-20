#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* _strlen - main
* @s: string
* Return: length of string excluding terminating null byte
*/

unsigned int _strlen(const char *s)
{
	unsigned int e;

	for (e = 0; s[e] != '\0'; e++)
	;
	return (e);
}

/**
* add_node_end - main
* @head: pointer to first node in linked list
* @str: string to be assigned to new node
* Return: address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *e;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = _strlen(str);
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
	}
	else
	{
		for (e = *head; e->next != NULL; e = e->next)
			;
		e->next = n;
	}
	return (n);
}
