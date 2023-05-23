#include "main.h"

/**
 * print_binary - prints binary of number
 * @b: number to convert
 * Return: binary of a number
*/

void print_binary(unsigned long int b)
{
	if (b > 1)
		print_binary(b >> 1);

	_putchar('0' + (b & 1));
}
