#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet function
 */
void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z' ; low++)
	{
		_putchar(low);
	}
	_putchar('\n');
}
