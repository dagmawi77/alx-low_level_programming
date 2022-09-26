#include "main.h"
#include <unistd.h>

/**
 * _putchar - to print Char
 * @c: the Char to print
 * Return : is 1.
 *
 *
 */
int _putcahr(char c)
{
	return (write(1, &c, 1));
}
