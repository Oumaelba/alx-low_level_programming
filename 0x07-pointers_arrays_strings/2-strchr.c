#include "main.h"
/**
 * _strchr - descr
 * @s: para1
 * @c: para2
 * Return: null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
