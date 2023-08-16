#include "main.h"
/**
 * print_sign - a function that checks the sign of a number
 * @n: the parametr of the function
 * Return: 1 if it is positive
 *         0 if it equals to 0
 *         -1 is it is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0' + 0);
		return (0);
	}
}
