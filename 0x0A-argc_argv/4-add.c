#include <stdio.h>
#include <ctype.h>
int main(int argc, char **argv)
{
	int i = 1;
	int num1;
	int result;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (i < argc)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sscanf(argv[i], "%d", &num1);
				result = num1 + result;
				num1 = 0;
			}
			i++;
		}
		printf("%i\n",result);
	}
	return (0);
}
