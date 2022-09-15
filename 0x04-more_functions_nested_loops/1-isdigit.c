#include "main.h"

/**
 * _isdigit - is function
 * @c: is the number
 * Return:1 if thethe number is digit ,0 else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
