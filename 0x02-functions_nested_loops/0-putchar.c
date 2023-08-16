#include "main.h"
/**
 * main - entry point
 * a c program that prints _putchar using my own header file
 * Return: always 0
*/
int main(void)
{
	char exp[] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
		_putchar(exp[i]);
	_putchar('\n');
	return (0);
}
