#include "main.h"
/**
 * print_rev - is return the length of string
 * return : len
 * @str: is pointer one
 * Return: The length of @str.
 */
void print_rev(char *str)
{
	int len = 0, index;

	while (str[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(str[index]);

	_putchar('\n');
}
