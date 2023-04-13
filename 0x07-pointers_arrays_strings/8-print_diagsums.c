#include "main.h"
/**
 * print_diagsums - descrip
 * @a: para 1
 * @size: para 2
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	unsigned int res1, res2;
	int j = size * size;

	res1 = a[0];
    res2 = 0;
	while (i < j)
	{
		res1 = res1 + a[i];
		i = (size + i + 1);
	}
    res2 = 0;
    i = 0;
	while (i < j - 1)
	{
		res2 = res2 + a[i];
		i = size + i - 1;
	}
    printf("%d, %d\n", res1, res2);
}
