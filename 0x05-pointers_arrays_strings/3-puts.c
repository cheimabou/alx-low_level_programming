#include "main.h"
/**
 * _strlen - a function that returns the legth of a string using pointers
 * @s : variable that holds the memory @ of the string
 * Return: the length
*/
int _strlen(char *s)
{
	char *p = str;
	int i;

	i = 0;
	while (*p != '\0')
	{
		p++ ;
		i++ ;
	}
	return (i);
}
