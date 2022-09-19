#include "main.h"
/**
 * _strlen - is return the length of string
 * return : len
 * @s: is pointer one
 * 
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}

	return (len);
}
