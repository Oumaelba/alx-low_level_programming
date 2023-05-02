#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the integers in a list
 * @head: Pointer to the first node of the list
 *
 * Return: The sum of all the integers in the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
