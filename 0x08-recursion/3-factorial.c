#include "main.h"
/**
 * factorial - print String.
 *  @n: printed String.
 *
 * Return: l of string
 */
int factorial(int n)
{
	int r = n;

	if (n < 0)
	{
		return (-1);
	}

	else if (n >= 0 && n <= 1)
	{
		return (1);
	}

	r *= factorial(n - 1);

	return (r);
}
