#include "main.h"
/**
 * memset - Fill the Firest n byetes
 * @s: A pinter of mem.
 * @c: The Char to fill mem.
 * @n: number of byte
 * Return : The pinter to fill.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *m = s, v = c;

	for (i = 0; i < n; i++)
		m[i] = v;

	return (m);
}
