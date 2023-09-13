#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to the function that compares
 * Return: the result
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

