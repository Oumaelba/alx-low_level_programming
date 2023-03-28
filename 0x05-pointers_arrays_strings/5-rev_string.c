#include "main.h"
/**
 * rev_string - descrip
 * @s: para
 *Return: i
 */

void rev_string(char *s)
{
	char *i = s;
	int len = 0;
	char *n;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	n = s + len - 1;
	while (i < n)
	{
		tmp = *i;
		*i = *n;
		*n = tmp;
		i++;
		n--;
	}
}
