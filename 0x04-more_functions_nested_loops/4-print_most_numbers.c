#include "main.h"
/**
 * print_most_numbers - a function that prints
 *                      from 0 to 9 without printing 2 and 4
 * Return: the number
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar('\n');
}
