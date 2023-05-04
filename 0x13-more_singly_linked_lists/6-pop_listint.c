#include "lists.h"
/**
 * pop_listint - deletes head node and returns its data
 * @head: pointer to the head of the linked list
 * Return: head node data on success, 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int number;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	number = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (number);
}
