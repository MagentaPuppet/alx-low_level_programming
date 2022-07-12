#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to the list_t list to be freed
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
