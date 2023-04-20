#include "variadic_functions.h"
/**
 * print_all - prints anything, followed by a new line
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *separator = "";
	char *str;
	va_list ptr;

	va_start(ptr, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(ptr, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(ptr, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ptr, double));
					break;
				case 's':
					str = va_arg(ptr, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ptr);
}
