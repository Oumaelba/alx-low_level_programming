#include "main.h"

/**
 * more_numbers - printing
 *
 */

void more_numbers(void)
{
	int i;
	int num;
	
	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				putchar(num / 10 + '0');
			putchar(num % 10 + 48);
		}
		putchar('\n');
	}
}
