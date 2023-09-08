#include "main.h"
/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each one of elements
 * Return: if it fails or one of the paramaters = 0 : NULL
 *         a pointer points to the array otherwise
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	return (NULL);
	ptr = (char *)p;
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (p);
}
