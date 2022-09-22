#include "main.h"
#include <unistd.h>
/**
 * _putchar - print character
 * @c: is hold char
 * Return: is 1.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
