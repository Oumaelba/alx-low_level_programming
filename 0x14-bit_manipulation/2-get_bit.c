#include "main.h"

/**
 * get_bit - gives value of bit at idx
 * @i: index to give value
 * @b: number
 * Return: value at idx or -1
 */

int get_bit(unsigned long int b, unsigned int i)
{
	int bit_per_byto;
	unsigned int bits_in_longo;

	bit_per_byto = 8;
	bits_in_longo = sizeof(b) * bit_per_byto;

	if (i >= bits_in_longo)
		return (-1);

	return ((b >> i) & 1);
}
