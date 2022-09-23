#include "main.h"
/**
 * leet - compares pointer to two string
 * @str: the first string.
 * Return: The final results.
 */
char *leet(char *str)
{
	int i1 = 0, i2;
	char l[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i1])
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (str[i1] == l[i2] ||
			str[i1] - 32 == l[i2])
			str[i1] = i2 + '0';
		}

		i1++;
	}

	return (str);
}
