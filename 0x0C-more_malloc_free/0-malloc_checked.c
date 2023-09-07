#include "main.h"
/**
 * malloc_checked - a function  that allocates memory
 * @b: size of allocated memory
 * Return: if it fails : 98
 *         otherwise : the pointer to the alloc memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	exit(98);
	return (ptr);
}
