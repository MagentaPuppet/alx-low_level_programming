#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the list_t list
 * @str: string to be added to the list_t list
 *
 * Return: the address of the new element, or NULL if it failed
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len = 0;
	list_t *last = *head;

	while (str[len] != '\0')
	{
		len++;
	}

	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		return (NULL);
	}

	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = temp;

	return (*head);
}
