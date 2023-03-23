#include <stdio.h>
#include "main.h"
/**
 * add - description
 *@a: para
 *@b: para1
 *Return: 0
 */

int add(int a, int b)
{
	int sum;

	sum = a + b;
	printf("%d + %d = %d\n", a, b, sum);
	return (sum);
}

