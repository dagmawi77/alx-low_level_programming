#include "main.h"
/**
 * print_square - Draws a straight line using the character.
 * @size: The number of _ characters to be printed.
 */
void print_square(int size)
{
	int h, w;

	if (size > 0)
	{
		for (h = 0; w < size; h++)
		{
			for (w = 0; w < size; w++)
				_putchar('#');

			if (h == size -1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
