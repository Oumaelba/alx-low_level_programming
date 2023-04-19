#include "3-calc.h"
/**
 * main - description
 * @argc: para 1
 * @argv: para2
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*oper)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	oper = get_op_func(argv[2]);
	if (oper == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = oper(num1, num2);
	printf("%d\n", result);
	return (0);
}
