#include "main.h"

int _strlen_recursion(char *s)
{
    int i = 0;
    int a = 0;

    if (s[i] == '\0')
	{
        putchar('\n');
	}
	_strlen_recursion(s + 1);
        a = a + 1;
        return (_strlen_recursion(s));

}