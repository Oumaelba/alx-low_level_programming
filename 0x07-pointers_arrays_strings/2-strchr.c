#include "main.h"
#include <stdlib.h>

/**
 * _strchr - descrip
 * @s: para1
 * @c: para2
 * Return: a pointer to c in the string s, or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
