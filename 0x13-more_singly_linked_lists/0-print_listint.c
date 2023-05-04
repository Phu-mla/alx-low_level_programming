#include "lists.h"
#include <stdio.h>
/**
 * node_count - counts the nodes in a LL
 * @h: linked list
 *
 * Return: number of nodes in linked list
 */
size_t node_count(const listint_t *h)
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
 * print_listint - prints all the elements of a LL
 * @h: list to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = node_count(h);
	while ( h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
