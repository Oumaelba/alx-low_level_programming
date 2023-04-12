#include "main.h"
/**
 * str_concat - descript
 * @s1: para 1
 * @s2: para2
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *concat;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		conact[i] = s1[1];
		i++;
	}
	while (j <= len2)
	{
		concat[i + j] = s2[j];
		j++;
	}
	return (concat);
}
