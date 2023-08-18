#include "main.h"
/**
 * more_numbers - a function that prints from 0 to 14 10x times
 * Return: the result
*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
			_putchar('0' + j);
			else
			{
				_putchar('0' + j/10);
				_putchar('0' + j%10);
			}
	}
	_putchar('\n');
}
