#include "main.h"
#include <stdio.h>
/**
 * main - description
 * Return: 0
 */

int main(void)
{
	unsigned long factor = 1;
	unsigned long our = 612852475143;
	unsigned long b;

	while (factor < 152488790)
	{
		if  (our % factor == 0)
		{
			if (factor % 2 != 0)
			{
				b = factor;
			}
		}
		factor++;
	}
	printf("%ld \n", b);
}
