#include "main.h"
/**
 * print_last_digit - a function that returns the last digit of an int
 * @n: parameter of the funcion
 * Return: the last digit
*/
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (n > 0)
	{
		_putchar('0' + i);
		return (i);
	}
	if (n < 0)
	{
		_putchar('0' + (-i));
		return (-i);
	}
	if (n == 0)
	{
	_putchar('0' + 0);
	return (0);
	}
	return (0);
}
