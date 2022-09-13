#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void print_alphabet();
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	

	return (0);
}

void print_alphabet(){
	
	char low;
	for (low = 'z'; low >='a';low--){
		putchar(low);
	}

}
