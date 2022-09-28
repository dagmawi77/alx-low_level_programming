#include "main.h"
/**
 * _puts_recursion - print String.
 *  @s: printed String.
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
	{
		_putchar('\n');
	}
}
