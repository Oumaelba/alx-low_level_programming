#include "main.h"
/**
 * _pow_recursion - descripti
 * @x: para1
 * @y: para2
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (0);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
