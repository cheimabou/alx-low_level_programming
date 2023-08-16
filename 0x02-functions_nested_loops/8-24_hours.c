#include "main.h"
/**
 * jack_bauer -  a function that prints from 00:00 to 23:59
 * Return: always 0
*/
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int m;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (m = 0; m <= 9; m++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + m);
					_putchar('\n');
				}
			}
		}
	}
}
