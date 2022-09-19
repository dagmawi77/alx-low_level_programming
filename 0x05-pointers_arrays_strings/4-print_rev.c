#include "main.h"
/**
 * print_rev - is return the length of string
 * return : len
 * @str: is pointer one
 * Return: The length of @str.
 */
void print_rev(char *str)
{
	int l=0,index;

	while (str[index++])
	{
		l++;
	}
	for (index = l -1; index >= 0; index--)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
