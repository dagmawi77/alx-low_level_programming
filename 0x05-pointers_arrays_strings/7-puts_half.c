#include "main.h"

/**
 * puts_half - print half string
 * @str: it accept the printed string
 *
 */
void puts_half(char *str)
{
	int i = 0, l = 0, n;

	while (str[i++])
		l++;
	if ((l % 2) == 0)
		n = l / 2;

	else
		n = (l + 1) / 2;

	for (i = n; i < l; i++)
		_putchar(str[i]);

	_putchar('\n');
}
