#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int c3[3][3] = {
		{72635472, 652476, 23842634},
		{2634534, 2782634, 63458345},
		{3453454, 3453455, 28974827}
	};
	print_diagsums((int *)c3, 3);
	return (0);
}