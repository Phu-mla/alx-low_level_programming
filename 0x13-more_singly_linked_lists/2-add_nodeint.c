#include "lists.h"
/**
 * new_node - creates a new node
 * @n: number to add to new node
 *
 * Return: new node (Success) NULL (failure)
 */
listint_t *new_node(const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if(new == NULL)
		return (NULL);
	new->n = n;
	return (new);
}

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @n: number to add to new node
 *
 * Return: adddress of the new element(Success), NULL (failure)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = new_node(n);
	if (new == NULL)
		return (new);
	new->next = *head;
	*head = new;
	return (*head);
}
