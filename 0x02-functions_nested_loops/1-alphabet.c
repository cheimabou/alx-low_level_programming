#include "main.h"
/**
 * print_alphabet - a function that prints alphabet using the _putchar function
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
