#include "main.h"

/**
 * _strcpy - copy string pointer
 * @dest: buffer to cp.
 * @src: source
 * Return: return
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
