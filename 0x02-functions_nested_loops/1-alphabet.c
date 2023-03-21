#include "main.h"

/**
 * print_alphabet - printing alphabets
 *
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	_putchar(alpha);
}
	_putchar('\n');
}
/**
 * main - printing
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
