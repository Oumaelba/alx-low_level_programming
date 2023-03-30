#include "main.h"
/**
 * _strlen - descrp
 * Return: i
 * @s: para
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
/**
 * _strncat - desc
 * @dest: para1
 * @src: para2
 * @n: para3
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = _strlen(dest);

	while (i < n && src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	return (dest);
}
