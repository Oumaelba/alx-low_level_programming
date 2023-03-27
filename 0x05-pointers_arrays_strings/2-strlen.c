#include "main.h"
#include <string.h>
/**
 * _strlen - description
 * @s: para
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
