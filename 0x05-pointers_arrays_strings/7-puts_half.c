#include "main.h"
/**
 * puts_half - descrip
 * @str: para
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int n;
	int i;

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
