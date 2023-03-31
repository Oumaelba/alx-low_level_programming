#include "main.h"
/**
 * cap_string - descrip
 * @s: para
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
	i = 1;
	while (i > 0 && s[i] != '\0')
	{
		if (s[i] == 32 || s[i] == 9 || s[i] == 10 || s[i] == 44
		|| s[i] == 59 || s[i] == 46 || s[i] == 33 || s[i] == 63
		|| s[i] == 34 || s[i] == 40 || s[i] == 41 || s[i] == 123
		|| s[i] == 125)
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
				i++;
			}
			else
				i++;
		}
		else
			i++;
	}
	return (s);
}
