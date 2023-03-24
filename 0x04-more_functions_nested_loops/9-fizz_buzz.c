#include <stdio.h>
/**
 * main - printing squares
 */

int main (void)
{
int n;
for (n = 1; n <= 99; n++)
{
	if
		(n % 5 == 0 && n % 3 == 0)
		{
			printf("FizzBuzz ");
		}
	else if
		(n % 3 == 0)
		{
			printf("Fizz ");
		}
	else if (n % 5 == 0)
	{
		printf("Buzz ");
	}
	else 
		printf("%d ", n);
}
printf("Buzz\n");
return (0);
}
