#include "lists.h"

/**
 * pop_listint - removes the head node of a listint_t linked list
 * @head: pointer to the head node of the list
 *
 * Return: the integer value stored in the head node
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL || head == NULL)
		return (0);

	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;

	return (n);
}
