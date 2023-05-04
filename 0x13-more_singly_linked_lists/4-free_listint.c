#include "lists.h"
/**
 * free_listint - frees a ll
 * @head: linked list
 *
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_listint(head->next);
	free(head);
}
