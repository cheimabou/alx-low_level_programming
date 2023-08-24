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

	while (*p != '\0')
	{
		int i = (int) *p;

		if (i >= 97 && i <= 122)
		{
			i = i - 32;
		}
		char c = (char) i;
		*p = c;
		p++;
	}
	return (a);
}
