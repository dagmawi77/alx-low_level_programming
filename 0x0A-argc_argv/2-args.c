#include <stdio.h>
/**
 * main - print recived agrument.
 * @argc: number of agrument.
 * @argv: array of pinter.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
