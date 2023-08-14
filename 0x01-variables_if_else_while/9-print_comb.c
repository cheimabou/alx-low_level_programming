#include <stdio.h>
/**
 * main - entry point
 * a c program that prints all possible combinations of single-digit numbers
 * Return: always 0 succesful
*/
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
