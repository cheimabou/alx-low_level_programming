#include <stdio.h>
/**
 * main - entry point
 * a c program prints all numbers of base 16
 * Return: always 0 (succesful)
*/
int main(void)
{
	int i;
	char c;

	for (i = 0 ; i <= 9 ; i++)
		putchar('0' + i);
	for (c = 'a' ; c <= 'f' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
