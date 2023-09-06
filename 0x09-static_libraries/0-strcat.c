#include "main.h"
/**
 * *_strcat - a function that concatenates two strings
 * @dest: the first string
 * @src: the second string we want to concatenate with @dest
 * Return: the result string
*/
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	*p = *src;
	while (*p != '\0')
	{
		p++;
		src++;
		*p = *src;
	}
	*p = '\0';
	return (dest);
}
