#include "main.h"
/**
 * reverse_array - descr
 * @a: para
 * @n: para
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int tmp = 0;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
