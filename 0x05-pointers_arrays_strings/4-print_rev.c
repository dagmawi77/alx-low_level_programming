#include "main.h"
/**
 * print_rev - is return the length of string
 * return : len
 * @str: is pointer one
 * Return: The length of @str.
 */
void print_rev(char *s)
{
	int l = 0, index;

	while (s[index++])
		l++;

	for (index = l - 1; index >= 0; index--)
	       	_putchar(s[index]);

	_putchar('\n');
}
