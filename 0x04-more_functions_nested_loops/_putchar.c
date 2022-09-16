#include "main.h"
#include <unistd.h>

/**
 * _putchar -writes the char
 * @c: the char to print 
 *
 * Return : it 1 print
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

