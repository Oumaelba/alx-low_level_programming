#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer of first node of list_t list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_Node;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new_Node = malloc(sizeof(list_t));

	if (new_Node == NULL)
	{
		return (NULL);
	}

	new_Node->str = strdup(str);

	if (new_Node->str == NULL)
	{
		free(new_Node);
		return (NULL);
	}
	new_Node->str = strdup(str);

	if (new_Node->str == NULL)
	{
		free(new_Node);
		return (NULL);
	}

	new_Node->len = strlen(str);
	new_Node->next = *head;
	*head = new_Node;

	return (new_Node);
}
