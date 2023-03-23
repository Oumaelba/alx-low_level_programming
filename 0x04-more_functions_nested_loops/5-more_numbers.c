#include "main.h"

/**
 * more_numbers - printing
 *
 */

void more_numbers(void)
{
	int i;
	int num;
	
	for (i = 0; i < 10; i++)
{
	for (num = 0; num < 10; num++)
{
		if (num < 10)
		_putchar(num + '0');
}
		if (num > 9)
{
		_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
}
}
}
