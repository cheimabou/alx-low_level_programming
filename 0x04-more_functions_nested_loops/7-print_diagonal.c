#include "main.h"
/**
 * print_diagonal - a function that prints a diagonal line xn times
 * @n: parameter of the function
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				_putchar(92);
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
}
