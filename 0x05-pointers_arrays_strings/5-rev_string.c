#include "main.h"
/**
 * rev_string - a function that reverse a string
 * @s: the pointer that points the string
*/
void rev_string(char *s)
{
	int i, c;
	char *k = s;
	char p;

	c = 0;
	while (*k != '\0')
	{
		k++;
		c++;
	}
	for (i = 0; i < c / 2; i++)
	{
		p = s[i];
		s[i] = s[c - i - 1];
		s[c - i - 1] = p;
	}
}
