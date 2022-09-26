#include "main.h"

void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	unsigned char *d = dest;
	const unsigned char *s = src;

	for (i = 0; i < n; i++)
		d[i] = s[i];

	return (dest);
}
