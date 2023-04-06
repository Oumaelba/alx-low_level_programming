#include "main.h"
/**
 * is_prime_number_helper - descr
 * @n: para
 * Return: 0
 */
int is_prime_number_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_number_helper(n, i - 1));
}
/**
 * is_prime_number - descr
 * @n: para
 * Return: 0
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper n, n - 1);
}
