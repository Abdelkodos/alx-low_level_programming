#include "lists.h"

/**
 * sum_listint - returns the sum of all data of a linked list
 * @head: points to the linked list
 *
 * Return: the sum of all data of the linked list or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
