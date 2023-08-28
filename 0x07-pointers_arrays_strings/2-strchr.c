#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: the string
 * @c: the character we want to find
 * Return: Returns a pointer to the first occurrence
 *         of the character c in the string s
 *         or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
			return (p);
		p++;
	}
	return ("NULL");
}
