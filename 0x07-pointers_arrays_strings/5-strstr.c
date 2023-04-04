#include "main.h"
#include <stddef.h>
/**
 * _strstr - descrip
 * @haystack: para 1
 * @needle: para 2
 * Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (needle[j] != '\0')
	{
		while (haystack[i] != '\0')
		{
			if (needle[j] != haystack[i])
				i++;
			else if (haystack[i] == needle[j])
				return (haystack + i);
		}
		i++;
		j++;
	}
	return (NULL);
}
