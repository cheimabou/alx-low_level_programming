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
	int s;

	m = (int) *s1;
	n = (int) *s2;
	s = m - n;
	return (s);
}
