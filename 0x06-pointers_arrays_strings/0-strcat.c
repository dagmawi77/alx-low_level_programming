#include "main.h"

/**
 * strcat - Concatenates the string.
 * @dest: is pointer.
 * @src: is source string.
 * Return : @dest string
 *
 */
char *strcat(char *dest, char *src)
{
	int i = 0, l = 0;

	while (dest[i++])
		l++;

	for (i = 0; src[i]; i++)
		dest[l++] = src[i];

	return (dest);
}
