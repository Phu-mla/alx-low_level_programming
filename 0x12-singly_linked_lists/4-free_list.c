#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the linked list of type list_t
 * head: list to be freed
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head -> next;
	}
}
