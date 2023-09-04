#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 *           in memory, which contains a copy of the string
 *           given as a parameter
 * @str: the string
 * Return: a pointer to a new string which is a duplicate of the string str
 *         NULL if str = NULL
 *         NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	char *r = str;
	int s;
	char *ptr;
	int i;

	s = 0;
	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		s = s + 1;
		str++;
	}
	while (r != str)
	{
		str--;
	}
	ptr = (char *)malloc(sizeof(char) * s + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
	{
		ptr[i] = str[i];
	}
	ptr[s] = '\0';
	return (ptr);
}
