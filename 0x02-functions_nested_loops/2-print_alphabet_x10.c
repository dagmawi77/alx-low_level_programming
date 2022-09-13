#include "main.h"
/**
 *print_alphabet_x10 - prints the alphabet in lowercase.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char low;

	while (count++ <= 9)
	{
	for (low = 'a'; low <= 'z' ; low++)
	{
		_putchar(low);
	}
	_putchar('\n');
	}
}
