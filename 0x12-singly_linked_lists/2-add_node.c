#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the linked list
 * @head: double ptr to list_t
 * @str: string to add in the node
 * 
 * Return: the address of the new eleement on success, NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str =strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

