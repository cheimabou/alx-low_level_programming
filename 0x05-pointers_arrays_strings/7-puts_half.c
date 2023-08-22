#include "main.h"
/**
 * puts_half - a function that prints the second half of a string
 * @str: the pointer that points to the string
*/
void puts_half(char *str)
{
	char *p = str;
	char *t = str;
	int i;
	int j;
	int n;
	int m;
	int k;

	i = 0;
	while (*p != '\0')
	{
		p++;
		i++;
	}
	for (k = 0; k < i / 2; k++)
	{
		t++;
	}
	if (i % 2 == 0)
	{
		m = i / 2;
		for (j = m; j <= i; j++)
		{
			_putchar(*t);
			t++;
		}
	}
	else
	{
		n = (i - 1) / 2;
		t++;
		for (j = n; j <= i; j++)
		{
			_putchar(*t);
			t++;
		}
	}
	_putchar('\n');
}

