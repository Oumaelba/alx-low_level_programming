#include "main.h"

/**
 * _islower - lowercase
 *@c: parameter
 *Return: 0
 */

int _islower
{
	char c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
