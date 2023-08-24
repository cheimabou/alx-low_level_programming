#include "main.h"
/**
 * *_strncat - a function that concatenats two strings
 * @dest: the first string
 * @src: the second string
 * @n: the n bytes we have to concatenate from src
 * Return: the result
*/
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (p);
}
