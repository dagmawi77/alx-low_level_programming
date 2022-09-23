#include "main.h"
/**
 * _strcmp - compares pointer to two string
 * @s1: the first string 
 * @s2: the second string
 * Return: The final results
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
