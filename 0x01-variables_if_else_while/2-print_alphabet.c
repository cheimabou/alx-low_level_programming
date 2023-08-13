#include <stdio.h>
/**
 * main - entry point
 * a c program that prints with putchar function
*/
int main(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
