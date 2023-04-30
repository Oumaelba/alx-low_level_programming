#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: A pointer to the head of the listint_t list
 *
 * Return: Always void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		free(head);
		tmp = tmp->next;
	}
}
