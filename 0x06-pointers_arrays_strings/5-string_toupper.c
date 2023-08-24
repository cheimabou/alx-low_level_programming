#include "main.h"
/**
 * *string_toupper - a function that changes all lowercases of a string to
 *                   uppercases
 * @a: the string
 * Return: the result
*/
char *string_toupper(char *a)
{
	char *p = a;
	int i;
	char c;

	while (*p != '\0')
	{
		i = (int) *p;
		if (i >= 97 && i <= 122)
		{
			i = i - 32;
		}
		c = (char) i;
		*p = c;
		p++;
	}
	return (a);
}
