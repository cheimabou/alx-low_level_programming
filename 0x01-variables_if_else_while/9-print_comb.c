#include <stdio.h>
/**
 * main - entry point
 * a c program that prints all possible combinations of single-digit numbers
 * Return: always 0 succesful
*/
int main(void)
{
	int i;

	for (i = 0 ; i <= 8 ; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('0' + 9);
	return (0);
}
