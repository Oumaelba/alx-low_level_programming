#include "variadic_functions.h"
/**
 * sum_them_all - sums a variable number of integers
 * @n: number of integers to sum
 * @...: variable arguments list of integers to sum
 * Return: the sum of all the integers in the arguments list
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i = 0;
	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
		return (0);
	else if (n != 0)
		while (i < n)
		{
		sum += va_arg(ptr, int);
		i++;
		}
		va_end(ptr);

		return (sum);
}
