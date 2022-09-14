#include "main.h"
/**
 *print_times_table - prints the alphabet in lowercase.
 *@n: the first numm and @ num2 : the second Num
 *Return: n
 */
void print_times_table(int n)
{
	int num, m, p;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');

				p = num * m;
				if (p <= 99)
				{
					_putchar(' ');
				}
				if (p <=9)
				{
					_putchar(' ');
				}
				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10)) % 10 + '0');
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + 0);
			}
			_putchar('\n');
		}
	}

}
