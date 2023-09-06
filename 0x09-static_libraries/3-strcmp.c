#include "main.h"
/**
 * _strcmp - a function that compares the first letter of two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if *s1 = *s2
 *         a positive number if *s1 > *s2 otherwise a negative number
*/
int _strcmp(char *s1, char *s2)
{
	int m;
	int n;
	char *p1 = s1;
	char *p2 = s2;

	while (*p1 != '\0' || *p2 != '\0')
	{
		m = (int) *p1;
		n = (int) *p2;
		if (m != n)
			return (m - n);
		p1++;
		p2++;
	}
	return (0);
}

