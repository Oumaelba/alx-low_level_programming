#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: A pointer to the head of the listint_t list
 *
 * Return: The number of nodes in the listint_t list
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	listint_t *ptr = NULL;

	if (h == NULL)
		return (NULL);
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d", ptr->n);
		count++;
		ptr = ptr->next;
	}
}
