#include "lists.h"

/**
 * listint_len - Prints all the elements of a listint_t list
 * @h: A pointer to the head of the istint_len list
 *
 * Return: The number of nodes in the istint_len list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
