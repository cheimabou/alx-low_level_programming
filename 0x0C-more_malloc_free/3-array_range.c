#include "main.h"
/**
 * array_range - a function that creates an array of integers.
 * @min : min value
 * @max: max value
 * Return: a pointer
*/
int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	ptr = malloc(sizeof(int) * j);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		ptr[i] = min + 1;
	return (ptr);
}
