#include "main.h"
/**
 *_islower - prints the alphabet in lowercase.
 *@c: The char is checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
