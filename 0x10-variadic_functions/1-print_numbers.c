#include "variadic_functions.h"
/**
 * print_numbers - prints a list of numbers
 *
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: variable number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	while (i < n)
	{
		if (separator != NULL && i == 0)
			printf("%d", va_arg(ptr, int));
		else if (!separator)
			printf("%d", va_arg(ptr, int));
		else 
			printf("%s%d", separator, va_arg(ptr, int));
		i++;
	}
	printf("\n");
	va_end(ptr);
}
