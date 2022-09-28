#include "main.h"
int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - print String.
 * @num: num raised.
 * @div: divider.
 * Return: l of string
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}

	if (div == num / 2)
	{
		return (1);
	}

	return (is_divisible(num, div + 1));
}
/**
 * is_prime_number - print String.
 * @n: num raised.
 *
 * Return: l of string
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}

	if (n >= 2 && n <= 3)
	{
		return (1);
	}

	return (is_divisible(n, div));
}
