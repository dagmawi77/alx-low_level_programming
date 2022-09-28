#include "main.h"
/**
 * _pow_recursion - print String.
 * @x: num raised.
 * @y: power.
 * Return: l of string
 */
int _pow_recursion(int x, int y)
{
	int r = x;

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	r *= _pow_recursion(x, y - 1);

	return (r);
}
