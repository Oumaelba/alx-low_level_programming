#include "main.h"
/**
 * swap_int - description
 * @a: para
 * @b: para
 */

void swap_int(int *a, int *b)
{
       	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
