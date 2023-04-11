#include <stdio.h>
/**
 * main - descrip
 * @argc: para
 * @argv: para
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sscanf(argv[1], "%d", &num1);
		sscanf(argv[2], "%d", &num2);
		result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);
}
