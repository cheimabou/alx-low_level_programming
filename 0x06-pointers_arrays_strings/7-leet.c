#include "main"
/**
 * *leet - a function that encodes a string into 1337
 * @a: the string
 * Return: the result
*/
char *leet(char *a)
{
	char *p = a;
	char arr[] = {'A', 'E', 'O', 'T', 'L'};
	int val[] = {4, 3, 0, 7, 1};
	int i;

	while (*a != '\0')
	{
		for (i = 0; i < sizeof(arr) / sizeof(char); i++)
		{
			if (*a == arr[i] || *a == arr[i] + 32)
				*a = 48 + val[i];
		}
		a++;
	}
	return (p);
}
