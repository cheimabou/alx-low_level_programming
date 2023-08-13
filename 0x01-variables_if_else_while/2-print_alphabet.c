#include <stdio.h>
/**
 * main - entry point
 * a c program that prints with putchar function
 * Return: always 0 (successful)
*/
int main(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
