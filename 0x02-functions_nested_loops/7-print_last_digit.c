#include "main.h"
/**
 * print_last_digit - a function that returns the last digit of an int
 * @n: parameter of the funcion
 * Return: the last digit
*/
int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
	if (n < 0)
	{
		_putchar('0' + (-1 (n % 10));
		return (-1 (n % 10));
	}
	if (n == 0)
	{
	_putchar('0' + 0);
	return (0);
	}
}
