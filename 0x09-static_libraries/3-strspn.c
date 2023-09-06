#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s:the string
 * @accept: the string that consistes of the bytes we should find in s
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	char *r = accept;
	unsigned int p = 0;

	while (*s != ',' && *s != ' ')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				p = p + 1;
			accept++;
		}
		while (r != accept)
		{
			accept--;
		}
		s++;
	}
	return (p);
}


