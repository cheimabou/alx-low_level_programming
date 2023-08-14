#include <stdio.h>
/**
 * main - entry point
 * a c program prints all single digit numbers of base 10 starting from 0
 * Return: always 0 (succesfull)
*/
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}
