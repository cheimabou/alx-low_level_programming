#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings
 * @separator: separe the strings
 * @n: number of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *k;

	va_start(p, n);
	for (i = 0; i < n ; i++)
	{
		k = va_arg(p, char *);
		if (k)
			printf("%s", k);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
