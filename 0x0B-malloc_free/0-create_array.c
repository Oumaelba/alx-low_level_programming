#include "main.h"
/**
 * create_array - description
 * @size: para 1
 * @c: para 2
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = (char *) malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
