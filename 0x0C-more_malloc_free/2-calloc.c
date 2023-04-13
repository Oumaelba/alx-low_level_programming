#include "main.h"
/**
 * _memset - function
 * @s: para
 * @b: para
 * @n: para
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
/**
 * _calloc - Allocates memory for an array using malloc
 *
 * @nmemb: The number of elements to allocate memory for
 * @size: The size of each element in bytes
 *
 * Return: A pointer to the allocated memory, or NULL if the allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	calloc = malloc(nmemb * size);
	if (calloc == NULL)
		return (NULL);
	_memset(calloc, 0, nmemb * size);
	return (calloc);
}
