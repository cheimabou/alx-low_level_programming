#include "main.h"
/**
 * print_square - a func that prints a square
 * @size: parameter of the func
*/
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; i < size; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
