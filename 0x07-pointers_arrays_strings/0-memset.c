#include "main.h"
/**
 * -memset - a function thet fills the first n bytes of the memory area
 *             with the constant byte b
 * @s: the pointer of the memory
 * @b: the constant
 * @n: n bytes we want to fill
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}

