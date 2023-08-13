#include <stdio.h>
/**
 * main - entry point
 * a c program that prints all the alphabet except q and e using the putchar function
 * Return: always 0 (succesfull)
*/
int main(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		if (alph != 'q' || alph != 'e')
			putchar(alph);
	}
	putchar('\n');
	return (0);
}
