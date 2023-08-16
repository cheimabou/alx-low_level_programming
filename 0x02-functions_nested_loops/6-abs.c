#include "main.h"
/**
 * _abs - a function that returns the absolute value
 * @n: parameter of the function
 * Return: the absolute value otherwise 0
*/
int _abs(int n)
{
	if (n > 0)
		return (n);
	if (n == 0)
		return (0);
	if (n < 0)
		return (-n);
	return (0);
}
