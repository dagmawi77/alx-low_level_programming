#include "main.h"

/**
 * print_line - is multiplication function
 * @n: the number of char
 */
void print_line(int n)
{
	int l;
	
	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
