#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- entry point
 * Return: Always 0
 */
int main(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
	{
		putchar(str);
	}
	putchar('\n');
	return (0);
}
