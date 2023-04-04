#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: points to a pointer to the linked list
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int r;

	if (*head == NULL)
		return (0);

	tmp = *head;
	r = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (r);
}
