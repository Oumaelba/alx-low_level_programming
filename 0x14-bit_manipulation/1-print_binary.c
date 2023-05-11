#include "main.h"

/**
 *_putchar - writes the character c to stdout
 *@c: parametor
 *Return: Always 0.
 */
int _putchar(char c)
{
	putchar(c);
	return (0);
}

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @num: The number to print in binary.
 */
void print_binary(unsigned long int num)
{
	unsigned long int temp = num;
	int bit_count = 0;

	while ((temp >>= 1) > 0)
	{
		bit_count++;
	}

	for (int i = bit_count; i >= 0; i--)
	{
		if ((num >> i) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}

	if (num == 0)
	{
		_putchar('0');
	}
}
