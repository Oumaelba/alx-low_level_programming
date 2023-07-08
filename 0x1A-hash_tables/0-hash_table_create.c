#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table of a given size
 * @size: The size of the hash table
 *
 * Return: A pointer to the newly created hash table,
 *         or NULL if an error occurred
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ta = NULL;
	unsigned long int i = 0;

	ta = malloc(sizeof(hash_table_t));
	if (ta == NULL)
		return (NULL);

	ta->size = size;

	ta->array = malloc(sizof(hash_node_t *) * size);
	if (ta->array == NULL)
	{
		free(ta);
		return (NULL);
	}

	while (ta->array < size)
	{
		ta->array[i] = NULL;
		i++;
	}

	return (ta);
}
