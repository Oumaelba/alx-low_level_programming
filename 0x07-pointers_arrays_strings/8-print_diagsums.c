#include "main.h"
/**
 * print_diagsums - descrip
 * @a: para 1
 * @size: para 2
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int res1;
	unsigned int res2;

	i = 0;
	res1 = 0;
	res2 = 0;

	while (i < size)
	{
		res1 += a[(size * i) + i];
		res2 += a[(size * (i + 1)) - (i + 1)];
		i++;
	}
	printf("%d, %d\n", res1, res2);
}
