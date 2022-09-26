#include "main.h"

/**
 * _memcpy - copies @n baytes from memory
 * @dest: A pointer Of memeory
 * @src: buffer copie of char.
 * @n: The number of bytes
 *
 * Return: is 1 return .
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned char *d = dest;
	const unsigned char *s = src;

	for (i = 0; i < n; i++)
		d[i] = s[i];

	return (dest);
}
