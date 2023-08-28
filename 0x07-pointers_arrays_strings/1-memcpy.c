#include "main.h"
/**
 * _memcpy - a function that copies memory area
 *            n bytes from memory area src to memory area dest
 * @n: bytes tha will be copied
 * @src: M A source
 * @dest: M A destination
 * Return: the result ( pointer to dest)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (p);
}
