#include "variadic_functions.h"
/**
 * print_strings - prints a list of numbers
 *
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: variable number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;

	va_start(ptr, n);
	
	while (i < n)
	{
		if (!va_arg(ptr, char *))
			printf("nil");
		if (separator != NULL && i == 0)
			printf("%s", va_arg(ptr, char *));
		else if (!separator)
			printf("%s", va_arg(ptr, char *));
		else
			printf("%s%s", separator, va_arg(ptr, char *));
		i++;
	}
	printf("\n");
	va_end(ptr);
}
