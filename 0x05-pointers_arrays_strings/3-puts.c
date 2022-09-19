#include "main.h"
/**
 * _puts - is return the length of string
 * return : len
 * @str: is pointer one
 * Return: The length of @str.
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str++);
	}

	return ('\n');
}
