#include "main.h"
/**
 * _strcmp - descript
 * @s1: para 1
 * @s2: para 2
 * Return: comparaision
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
