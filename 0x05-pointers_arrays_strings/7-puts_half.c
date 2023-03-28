#include "main.h"
/**
 * puts_half - descrip
 * @str: para
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int n;

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}
	for (int i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
