#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * @str: the variable that hols the @ of the string
*/
void puts2(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		_putchar(*p);
		p = p + 2;
	}
	_putchar('\n');
}
