#include "main.h"
/**
 * print_rev - is return the length of string
 * return : len
 * @s: is pointer one
 * Return: The length of @str.
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
	{
		len++;
	}
	for (index = len - 1; index >= 0; index--)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
