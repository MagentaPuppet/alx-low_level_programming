#include "lists.h"

/**
 * len - returns the length of a string
 * @str: string whose length is to be determined
 *
 * Return: the length of the string @str
 **/

unsigned int len(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the list_t list
 * @str: string to be added to the list_t list
 *
 * Return: the address of the new element, or NULL if it failed
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	char *string = strdup(str);

	temp = malloc(sizeof(list_t));
	if (temp)
	{
		temp->str = string;
		temp->len = len(string);

		temp->next = *head;
		*head = temp;

		return (*head);
	}
	return (NULL);
}
