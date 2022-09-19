#include "main.h"
/**
 * _strlen - is return the length of string
 * return : len
 * @s: is pointer one
 * Return: The length of @str.
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
	{
		len++;
	}

	return (len);
}
