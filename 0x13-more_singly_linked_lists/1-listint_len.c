#include "lists.h"
/**
 * listint_len - returns the number of elements in a LL
 * @h: linked list
 *
 * Return: number of elements in LL
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
