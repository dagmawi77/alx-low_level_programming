#include "main.h"
/**
 * _strncpy - copy at most an inputted
 * @dest: the buffer 
 * @src: the Source string
 * @n: The max num of bytes
 * Return: A pointer
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, l = 0;

	while (src[i++])
		l++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = l; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
