#include "main.h"
#include <stdio.h>
/**
 * print_rev - descrip
 * @s: para
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar("%c",s[i]);
		i--;
	}
}
