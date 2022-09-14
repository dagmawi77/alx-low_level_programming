#include<stdio.h>
/**
 *add - prints the alphabet in lowercase.
 *@num1: the first numm and @ num2 : the second Num
 *@num2: the Second number
 *Return: void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		print("%d\n", n);
	}

}
