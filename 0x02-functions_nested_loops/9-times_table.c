#include "main.h"
/**
 *time_table - prints the alphabet in lowercase.
 *
 *Return: void
 */
void time_table(void)
{
	int n, multi, prod;

	for (n = 0; n <= 9; h++)
	{
		_putchar('0');
		for (multi = 1; multi <= 9; multi++)
		{
		_putchar(',');
		_putchar(' ');

		prod = n * multi;

		if (prod <= 9)
		{
			_putchar(' ');
		}
		else
		{
			_putchar((proud / 10) + '0');
		}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
