#include <stdio.h>
#include "main.h"

/**
 * print_array - print an intputted number
 * @a: the int array
 * @n: the number of element
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if(i == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
