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
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
}
}
