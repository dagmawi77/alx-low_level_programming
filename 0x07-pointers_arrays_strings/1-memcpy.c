#include "main.h"

/**
 * _memcpy - copies @n baytes from memory
 * @dest: A pointer Of memeory
 * @src: buffer copie of char.
 * @n: The number of bytes
 *
 * Return: is 1 return .
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	unsigned char *d = dest;
	const unsigned char *s = src;

	for (i = 0; i < n; i++)
		d[i] = s[i];

	return (dest);
}
