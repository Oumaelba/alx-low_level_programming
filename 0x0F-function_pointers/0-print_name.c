#include <stdlib.h>
#include "function_pointers.h"
void print_name(char *name, void (*f)(char *))
{
	 (name && f) ? f(name) : (void)0;
}
