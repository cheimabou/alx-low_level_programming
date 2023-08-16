#include "main.h"
/**
 * print_last_digit - a function that returns the last digit of an int
 * @n: parameter of the funcion
 * Return: the last digit
*/
int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
