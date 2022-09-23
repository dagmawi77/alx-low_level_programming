#include "main.h"
/**
 * _strncat - Concat two string
 * @dest: The string to be appende
 * @src: The string
 * @n: number from src
 * Return: a pointer to result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, l = 0;

	while (dest[i++])
		l++;

	for (i = 0; src[i] && i < n; i++)
		dest[l++] = src[i];

	return (dest);
}
