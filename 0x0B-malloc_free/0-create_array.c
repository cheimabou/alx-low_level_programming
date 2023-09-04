#include "main.h"
/**
 * create_array - a function that creates an array of chars,
 *                 and initializes it with a specific char
 * @size: size of array
 * @c: the character we will initialize the array with
 * Return: Null if size = 0
 *         a pointer to the array
 *         or a Null if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
