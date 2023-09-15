#include "main.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: the result
*/
int sum_them_all(const unsigned int n, ...)
{
	int i, s;
	va_list p;

	va_start(p, n);
	s = 0;
	for (i = 0; i < n; i++)
		s += va_arg(p, int);
	va_end(p);
	return (s);
}

