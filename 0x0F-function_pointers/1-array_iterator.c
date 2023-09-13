#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 *                  on each element of an array.
 * @array: the array
 * @size: array's size
 * @action: pointer to the function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *p = array + size;

	if (array && size && action)
	{
		while (array < p)
			action(*array++);
	}
}
