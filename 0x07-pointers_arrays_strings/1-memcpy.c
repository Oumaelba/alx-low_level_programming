#include "main.h"
/**
 * _memcpy - descr
 * @dest: para1
 * @src: para2
 * @n: para3
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i <= n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
