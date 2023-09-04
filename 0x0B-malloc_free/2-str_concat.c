#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1: string 1
 * @s2 : string 2
 * Return: NULL on failure
 *         or the result on success
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	char *p = s1;
	char *k = s2;
	int s = 0;
	int t = 0;
	int i = 0;

	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);
	while (*s1 != '\0')
	{
		s = s + 1;
		s1++;
	}
	while (*s2 != '\0')
	{
		t = t + 1;
		s2++;
	}
	s1 = p;
	s2 = k;
	ptr = (char *)malloc(sizeof(char) * (s + t + 1));
	if (ptr == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		ptr[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		ptr[i] = *s2;
		i++;
		s2++;
	}
	ptr[i] = '\0';
	return (ptr);
}

