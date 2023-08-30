#include "main.h"
/**
 * factorial - a function that calculates tha factorial on an integer
 * @n : the integer
 * Return: the result
*/
int factorial(int n)
{
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
