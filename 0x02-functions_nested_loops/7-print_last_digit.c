#include "main.h"

/**
 *print_last_digit - description
 *@c: para
 *Return: 0
 */

int print_last_digit(int c)

{
	if (c < 0)
	{
		c = (c % 10) * -1;
	}
	else
	{
		c = (c % 10);
	}
	_putchar(c + '0');
	return (c);
}
