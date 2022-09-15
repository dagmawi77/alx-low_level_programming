#include "main.h"

/**
 * _isupper - is function
 * @c: is char
 * Return:1 if the char is upper ,0 to char is false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
