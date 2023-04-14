#include "main.h"
/**
 * _realloc - Reallocates a memory block using malloc and free
 *
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 * @old_size: Size of the allocated space for ptr in bytes
 * @new_size: New size, in bytes, of the new memory block
 *
 * Return: Pointer to the newly allocated memory block or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *arr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
		{
		*((char *)arr + i) = *((char *)ptr + i);
		}
	else if (new_size < old_size)
		for (i = 0; i < old_size || i < new_size; i++)
		{
		*((char *)arr + i) = *((char *)ptr + i);
		}
	free(ptr);
	return (arr);
}
