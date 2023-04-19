#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - description
 * @name: para1
 * @f: para2
*/
void print_name(char *name, void (*f)(char *))
{
	 (name && f) ? f(name) : (void)0;
}
