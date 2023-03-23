#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - description
 * @n: para
 * Return: 0
 */

#include <stdio.h>

void print_to_98(int n)
{
    int i = n;

	if (n <= 98)
	{
		for (i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
		else
		{
			for (int i = n; i > 98; i--)
			{
				printf("%d, ", i);
			}
		}
		printf("98\n");
}
