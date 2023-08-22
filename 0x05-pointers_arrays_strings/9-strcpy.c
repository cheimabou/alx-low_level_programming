#include "main.h"
/**
 * *_strcpy - a function that copies the content from a string to another
 * @dest: where we want to place the string
 * @src: the original string wa want to copy
 * Return: the copy version (destination)
*/
char *_strcpy(char *dest, char *src)
{
	char *p = src;

	while (*p != '\0')
	{
		*dest = *p;
		dest++;
		p++;
	}
	*dest = '\0';
	return (dest);
}


