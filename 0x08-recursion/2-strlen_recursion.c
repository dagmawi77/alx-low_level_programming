#include "main.h"
/**
 * _print_rev_recursion - print String.
 *  @s: printed String.
 *
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}

	return (l);
}
