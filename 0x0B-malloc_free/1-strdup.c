#include "main.h"
/**
 * _strdup - descrip
 * @str: para 1
 * Return: cpstr
 */
char *_strdup(char *str)
{
	char *cpstr;
	int len = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	cpstr = malloc((len + 1) * sizeof(char));
	if (cpstr == NULL)
		return (NULL);
	while (i <= len)
	{
		cpstr[i] = str[i];
		i++;
	}
	return (cpstr);
}
