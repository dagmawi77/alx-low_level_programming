#include "main.h"
/**
 * print_most_numbers - is void functions
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
