#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_list - main
* @h: pointer to elemnts of type list_t
* Return: the number of nodes in the list
*/

size_t print_list(const list_t *h)
{
	size_t c = 0;
	list_t *list;

	list = (list_t *)h;
	for (; list != NULL; c++)

	{
		if (list->str == NULL)

		{

		printf("[0] (nil)\n");

		}

		else

		{
			printf("[%d] %s\n", list->len, list->str);
		}
		list = list->next;
	}

	return (c);
}
