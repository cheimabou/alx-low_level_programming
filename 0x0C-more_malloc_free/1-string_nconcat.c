#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: first n bytes from s2
 * Return: a pointer to the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = s1;
	char *k;
	char *p2 = s2;
	int s, so;
	int j, m;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
if (s2 == NULL)
s2 = "";
	s = 0;
	so = 0;
	while (*s1 != '\0')
	{
		s = s + 1;
		s1++;
	}
	for (i = 0; i < n - 1; i++)
	{
		so = so + 1;
		s2++;
	}
	k = (char *)malloc(sizeof(char) * (s + so + 2));
	if (k == NULL)
	return (NULL);
	j = 0;
	for (j = 0; j < s; j++)
	{
		k[j] = p[j];
	}
	for (m = 0; m <= so; m++)
	{
		k[j] = p2[m];
		j++;
	}
	k[j] = '\0';
	return (k);
}
