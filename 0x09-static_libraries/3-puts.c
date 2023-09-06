#include "main.h"
/**
 * _puts - a function thatprints a string
 * @str : variable that holds the memory @ of the string
*/
void _puts(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
}
