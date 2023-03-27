#include "main.h"
/**
 * rev_string - descrip
 * @s: para
 */
void rev_string(char *s)
{
	char *i = s;
	char *n = s + _strlen(s) - 1;
	char tmp;

	while (i < n)
	{
		tmp = *i;
		*i = *n;
		*n = tmp;
		i++;
		n--;
	}
}
