#include "main.h"
/**
 * print_number - Encodes a string using rot13.
 * @n: the first string.
 * Return: The final results.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
