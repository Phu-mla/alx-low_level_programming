#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list
 *
 * Return: returns the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
/**
 * get_nodeint_at_index - returns the nth node of a LL
 * @head: linked list
 * @index: index of the element to return
 * Return: nth node (success) NULL (failure)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	if (index >= listint_len(head))
		return (NULL);
	a = 0;
	while (a < index)
	{
		head = head->next;

		a++;
	}
	return (head);
}

