#include "main.h"
/**
 * *_strncpy -  a function that copies a string
 * @dest: the destination string
 * @src: the string hich will be copied
 * @n: n bytes from src will be added
 * Return: the result
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
