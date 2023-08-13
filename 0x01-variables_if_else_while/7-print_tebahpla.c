#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (succesfull)
*/
int main(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph--)
		putchar(alph);
	putchar('\n');
	return (0);
}
