#include "main.h"
/**
 * rev_string - is return the length of string
 * return : len
 * @s: is pointer one
 * Return: The length of @str.
 */
void rev_string(char *s)
{
	int len = 0, index;
	char tmp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index -1];
		s[len - index - 1] = tmp;
	}
}
