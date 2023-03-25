#include "main.h"

/**
 * print_number - printing numbers
 *@n: para
 */

void print_number(int n)
{
	int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	while (n / i >= 10)
	{
		i = i * 10;
	}
	while (i > 0)
	{
		_putchar((n / i) % 10 + '0');
		i = i / 10;
	}
}
