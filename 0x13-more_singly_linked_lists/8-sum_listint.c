#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the integers in a list
 * @head: Pointer to the first node of the list
 *
 * Return: The sum of all the integers in the list
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head->next == NULL)
		return (0);
	while (head->next != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
