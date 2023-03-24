#include "main.h"
#include <stdio.h>
/**
 * main - description
 * Return: 0
 */
int main(void)
{
	unsigned long divisor = 2;
	unsigned long num = 612852475143;

	while (divisor < num)
	{
		if  (num % divisor == 0)
		{
			num = num / divisor;
			divisor = 2;
		}
		else
			divisor++;
	}
	printf("%ld\n", num);
	return (0);
}
