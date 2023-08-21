#include "main.h"
/**
 * print_rev - a function that prints a
 *                 reverse string
 * @s: the variable that holds the @ of the string
*/
void print_rev(char *s)
{
	char *p = s;

	while (*p != '\n')
	{
		p--;
	}
	while (p != s)
	{
		_putchar(*p);
		p--;
	}
	_putchar('\n');
}
