#include "main.h"
/**
 * array_range - Creates an array of integers containing all values from
 * min to max ordered from min to max
 *
 * @min: The minimum value in the range
 * @max: The maximum value in the range
 *
 * Return: A pointer to the newly created array, or NULL if
 * the allocation fails or min > max
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int range = 0;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		arr[i] = min++;
	return (arr);
}
