#include "main.h"
/**
 * _strspn - descrip
 * @s: para 1
 * @accept: para 2
 * Return: store
 */

char *_strpbrk(char *s, char *accept)

{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
			else
				j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		j = 0;
		i++;
	}
	return (s);
}