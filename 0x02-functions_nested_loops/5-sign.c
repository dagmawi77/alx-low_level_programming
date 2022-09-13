#include "main.h"
/**
 *print_sign - prints the alphabet in lowercase.
 *@n: The char is checked
 *Return: 1 if character is lowercase 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
