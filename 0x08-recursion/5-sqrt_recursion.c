#include "main.h"
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);
/**
 * find_sqrt - print String.
 * @num: num raised.
 * @root: power.
 * Return: l of string
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}

	if (root == num / 2)
	{
		return (-1);
	}

	return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - print String.
 * @n: num raised.
 *
 * Return: l of string
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (find_sqrt(n, root));
}

