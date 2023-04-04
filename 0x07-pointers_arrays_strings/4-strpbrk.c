#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - descrip
 * @s: para 1
 * @accept: para 2
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] != accept[j])
			{
				j++;
			}
			else
			break;
		}
		if (s[i] == accept[j])
		{
			return (s + i);
		}
		j = 0;
		i++;
	}
	return (NULL);

}
