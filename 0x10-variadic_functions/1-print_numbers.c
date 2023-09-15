#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers
 * @separator: a separator between numbers
 * @n: number of integers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
