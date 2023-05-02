#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the given index
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev, *curr, *temp;

	if (*head != NULL)
	{
		curr = *head;
		if (index > 0)
		{
			temp = *head;
			for (i = 0; i < index && temp != NULL; i++)
			{
				curr = temp;
				temp = temp->next;
			}
			if (temp == NULL)
			{
				return (-1);
			}
			prev = curr;
			curr = temp;
		}
		if (index == 0)
		{
			curr = *head;
			*head = (*head)->next;
			free(curr);
			return (1);
		}
			prev->next = curr->next;
			free(curr);
			return (1);
	}
	else
	{
		return (-1);
	}
}
