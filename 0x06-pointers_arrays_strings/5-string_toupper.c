#include "main.h"
/**
 * string_toupper - compares pointer to two string
 * @str: the first string.
 * Return: The final results.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
