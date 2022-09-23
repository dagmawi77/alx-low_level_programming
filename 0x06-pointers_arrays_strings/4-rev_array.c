#include "main.h"
/**
 * reverse_array - compares pointer to two string
 * @a: the first string.
 * @n: the second string.
 * Return: The final results.
 */
void reverse_array(int *a, int n)
{
	int t, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		t = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = t;
	}
}
